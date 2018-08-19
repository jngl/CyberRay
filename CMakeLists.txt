cmake_minimum_required (VERSION 3.0)
project (CyberRay)

set(CMAKE_CXX_STANDARD 17)

#CyberBase
add_subdirectory("ext/CyberBase")

#CyberRay
file(GLOB_RECURSE cyber_ray_source_files lib/src/*)
add_library(CyberRay ${cyber_ray_source_files})
target_link_libraries(CyberRay CyberBase)
target_include_directories(CyberRay PUBLIC lib/include/)

#CyberRayApp
file(GLOB_RECURSE cyber_ray_app_source_code src/*)
add_executable(CyberRayApp ${cyber_ray_app_source_code})
target_link_libraries(CyberRayApp CyberRay)
