cmake_minimum_required (VERSION 3.0)
project (CyberRay)

set(CMAKE_CXX_STANDARD 17)

#CyberBase
add_subdirectory("ext/CyberBase")

#CyberRay
file(GLOB_RECURSE source_files src/*)
add_executable(CyberRay ${source_files})
target_link_libraries(CyberRay CyberBase)
