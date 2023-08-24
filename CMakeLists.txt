cmake_minimum_required(VERSION 3.10.2)

add_library(add SHARED mylibrary.c)
add_executable(mymake main.c mylibrary.c)
target_include_directories(mymake PUBLIC .)
target_link_libraries(mymake add)
install(TARGETS mymake RUNTIME DESTINATION bin)
