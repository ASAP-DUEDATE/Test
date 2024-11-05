# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SendFileServer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SendFileServer_autogen.dir\\ParseCache.txt"
  "SendFileServer_autogen"
  )
endif()
