# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\EcoTaxiQt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\EcoTaxiQt_autogen.dir\\ParseCache.txt"
  "EcoTaxiQt_autogen"
  )
endif()
