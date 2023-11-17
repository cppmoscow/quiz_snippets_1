cmake_minimum_required(VERSION 3.22)
project(quiz_snippets_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(snippet_0 snippets/snippet_0.cpp)
add_executable(snippet_1 EXCLUDE_FROM_ALL snippets/snippet_1.cpp)
add_executable(snippet_2 snippets/snippet_2.cpp)