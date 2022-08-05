
(executable
 (name json_test)
 (modules json_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  (:json ./json) (:json5 ./json5)
  (:json_test json_test.exe))
 (action (run %{json_test} )))


(executable
 (name output_encoded_test)
 (modules output_encoded_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:output_encoded_test output_encoded_test.exe))
 (action (run %{output_encoded_test} )))


(executable
 (name stream_decoder_test)
 (modules stream_decoder_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  (:test_wav ./test.wav) (:test_mp3 ./test.mp3)
  (:stream_decoder_test stream_decoder_test.exe))
 (action (progn (run %{stream_decoder_test} %{test_wav} bla.wav) (run %{stream_decoder_test} %{test_mp3} bla.wav))))


(executable
 (name version_test)
 (modules version_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:version_test version_test.exe))
 (action (run %{version_test} )))


(executable
 (name strings_test)
 (modules strings_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:strings_test strings_test.exe))
 (action (run %{strings_test} )))


(executable
 (name unifier_test)
 (modules unifier_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:unifier_test unifier_test.exe))
 (action (run %{unifier_test} )))


(executable
 (name taglib_test)
 (modules taglib_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:taglib_test taglib_test.exe))
 (action (run %{taglib_test} )))


(executable
 (name pool_test)
 (modules pool_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:pool_test pool_test.exe))
 (action (run %{pool_test} )))


(executable
 (name timezone)
 (modules timezone)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:timezone timezone.exe))
 (action (run %{timezone} )))


(executable
 (name start_stop_test)
 (modules start_stop_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:start_stop_test start_stop_test.exe))
 (action (run %{start_stop_test} )))


(executable
 (name generator_test)
 (modules generator_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:generator_test generator_test.exe))
 (action (run %{generator_test} )))


(executable
 (name decoder_test)
 (modules decoder_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:decoder_test decoder_test.exe))
 (action (run %{decoder_test} )))


(executable
 (name utils_test)
 (modules utils_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:utils_test utils_test.exe))
 (action (run %{utils_test} )))


(executable
 (name content_test)
 (modules content_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:content_test content_test.exe))
 (action (run %{content_test} )))


(executable
 (name is_url)
 (modules is_url)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:is_url is_url.exe))
 (action (run %{is_url} )))


(executable
 (name playlist_basic_test)
 (modules playlist_basic_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:playlist_basic_test playlist_basic_test.exe))
 (action (run %{playlist_basic_test} )))


(executable
 (name frame_test)
 (modules frame_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:frame_test frame_test.exe))
 (action (run %{frame_test} )))


(executable
 (name types)
 (modules types)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:types types.exe))
 (action (run %{types} )))


(executable
 (name source_test)
 (modules source_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:source_test source_test.exe))
 (action (run %{source_test} )))


(executable
 (name readavi)
 (modules readavi)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:readavi readavi.exe))
 (action (run %{readavi} )))


(executable
 (name string_test)
 (modules string_test)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:string_test string_test.exe))
 (action (run %{string_test} )))


(executable
 (name meth)
 (modules meth)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  
  (:meth meth.exe))
 (action (run %{meth} )))


(executable
 (name parsesrt)
 (modules parsesrt)
 (libraries liquidsoap_core liquidsoap_optionals))

(rule
 (alias runtest)
 (package liquidsoap)
 (deps
  (:test_srt ./test.srt)
  (:parsesrt parsesrt.exe))
 (action (run %{parsesrt} %{test_srt})))
