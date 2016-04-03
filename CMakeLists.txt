cmake_minimum_required(VERSION 3.3)
project(verketteteListe_OOPBuch)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp dynamischesFeld.cpp dynamischesFeld.h CString.cpp CString.h)
add_executable(verketteteListe_OOPBuch ${SOURCE_FILES})