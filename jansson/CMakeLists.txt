cmake_minimum_required(VERSION 2.8)
project(GitCmt C)

include_directories(${PROJECT_SOURCE_DIR}/jansson/build/include)
link_directories(${PROJECT_SOURCE_DIR}/jansson/build/lib)

#set(CMAKE_INCLUDE_PATH ${PROJECT_SOURCE_DIR}/jansson/build/include)
#set(CMAKE_LIBRARY_PATH ${PROJECT_SOURCE_DIR}/jansson/build/lib)

#message(STATUS "include path:" ${CMAKE_INCLUDE_PATH})
#message(STATUS "library path:" ${CMAKE_LIBRARY_PATH})


add_executable(test github_commits.c)
target_link_libraries(test jansson curl)
