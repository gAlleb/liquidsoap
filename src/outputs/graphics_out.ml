(*****************************************************************************

  Copyright 2003-2019 Savonet team

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details, fully stated in the COPYING
  file at the root of the liquidsoap distribution.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA

 *****************************************************************************)

class output ~pos ~kind ~infallible ~autostart ~on_start ~on_stop source =
  let video_width = Lazy.force Frame.video_width in
  let video_height = Lazy.force Frame.video_height in
  object
    inherit
      Output.output
        ~pos ~name:"graphics" ~output_kind:"output.graphics" ~infallible
          ~on_start ~on_stop ~content_kind:kind source autostart

    val mutable sleep = false

    method output_stop = sleep <- true

    method output_start =
      Graphics.open_graph "";
      Graphics.set_window_title "Liquidsoap";
      Graphics.resize_window video_width video_height;
      sleep <- false

    method output_send buf =
      let rgb =
        let c = buf.Frame.content in
        Video.get c.Frame.video.(0) 0
      in
      let img = Video.Image.to_int_image rgb in
      let img = Graphics.make_image img in
      Graphics.draw_image img 0 0

    method output_reset = ()
  end

let () =
  let kind = Lang.video in
  let k = Lang.kind_type_of_kind_format kind in
  Lang.add_operator "output.graphics" ~active:true
    (Output.proto @ [("", Lang.source_t k, None, None)])
    ~return_t:k ~category:Lang.Output
    ~descr:"Display video stream using the Graphics library."
    (fun p pos ->
      let autostart = Lang.to_bool (List.assoc "start" p) in
      let infallible = not (Lang.to_bool (List.assoc "fallible" p)) in
      let on_start =
        let f = List.assoc "on_start" p in
        fun () -> ignore (Lang.apply f [])
      in
      let on_stop =
        let f = List.assoc "on_stop" p in
        fun () -> ignore (Lang.apply f [])
      in
      let source = List.assoc "" p in
      ( new output ~pos ~kind ~infallible ~autostart ~on_start ~on_stop source
        :> Source.source ))
