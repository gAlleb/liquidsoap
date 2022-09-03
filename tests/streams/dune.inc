
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  dtmf.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" dtmf.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  crossfade.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" crossfade.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  image.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" image.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  radio2.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" radio2.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  radio.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" radio.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  fades-overrides.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" fades-overrides.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  say.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" say.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  autostart.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" autostart.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  cross.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" cross.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  cross-override.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" cross-override.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  sine.detect.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" sine.detect.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  rotate.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" rotate.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  srt_passphrase.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" srt_passphrase.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  srt_listen_callback.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" srt_listen_callback.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  on_metadata.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" on_metadata.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  request.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" request.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  on_frame.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" on_frame.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  ctype2.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" ctype2.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  srt_multiple_outputs.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" srt_multiple_outputs.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  ctype1.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" ctype1.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  stretch-clock-propagation.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" stretch-clock-propagation.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  smart-crossfade.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" smart-crossfade.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  fades-persistent-override.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" fades-persistent-override.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  huge-playlist.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" huge-playlist.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  random.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" random.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  cross-persist-override.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" cross-persist-override.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  on_track.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" on_track.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  195.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" 195.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  197.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" 197.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  many-playlists.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" many-playlists.liq)))
  
(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  playlist-watch.liq
  ./file1.mp3
  ./file2.mp3
  ./file3.mp3
  ./jingle1.mp3
  ./jingle2.mp3
  ./jingle3.mp3
  ./file1.png
  ./file2.png
  ./jingles
  ./playlist
  ./huge_playlist
  ../media/all_media_files
  (source_tree ../../src/libs)
  (:liquidsoap ../../src/bin/liquidsoap.exe)
  (:test_liq ../test.liq)
  (:run_test ../run_test.sh))
 (action (run %{run_test} "%{liquidsoap} %{test_liq} -" playlist-watch.liq)))
  