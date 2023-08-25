cmake_minimum_required(VERSION 3.10.2)

add_library(add SHARED mylibrary.c)
add_executable(task main.c)
target_include_directories(task PUBLIC .)
target_link_libraries(task add)
install(TARGETS task RUNTIME DESTINATION bin)
