val cache_enabled : unit -> bool
val cache_dir : unit -> string option
val retrieve : toplevel:bool -> Parsed_term.t -> Term.t option
val cache : toplevel:bool -> parsed_term:Parsed_term.t -> Term.t -> unit
