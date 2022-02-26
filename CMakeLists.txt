cmake_minimum_required(VERSION 3.15)
project(tensorflow CXX)

add_library(tensorflow src/tensorflow.cpp)

set_target_properties(tensorflow PROPERTIES PUBLIC_HEADER "src/tensorflow.h")
install(TARGETS tensorflow DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
