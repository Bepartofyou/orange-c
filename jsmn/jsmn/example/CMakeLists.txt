set(CMAKE_INCLUDE_PATH ${PROJECT_SOURCE_DIR})
set(CMAKE_LIBRARY_PATH ${PROJECT_BINARY_DIR}/libs)

message(STATUS ${PROJECT_SOURCE_DIR})
message(STATUS ${PROJECT_BINARY_DIR})

add_executable(jsondump jsondump.c)
target_link_libraries(jsondump jsmn)

add_executable(simple simple.c)
target_link_libraries(simple jsmn)
