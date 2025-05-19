# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\PdaGui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PdaGui_autogen.dir\\ParseCache.txt"
  "PdaGui_autogen"
  )
endif()
