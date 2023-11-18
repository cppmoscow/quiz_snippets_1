cmake_minimum_required(VERSION 3.22)
project(quiz_snippets_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(snippet_0 snippets/snippet_0.cpp)
add_executable(snippet_1 EXCLUDE_FROM_ALL snippets/snippet_1.cpp)
add_executable(snippet_2 snippets/snippet_2.cpp)

execute_process(
    COMMAND sh ${CMAKE_SOURCE_DIR}/snippets/snippet_3/runme-clang.sh
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/snippets/snippet_3/
)
file(RENAME ${CMAKE_SOURCE_DIR}/snippets/snippet_3/snippet_3_clang ${CMAKE_BINARY_DIR}/snippet_3_clang)

execute_process(
    COMMAND sh ${CMAKE_SOURCE_DIR}/snippets/snippet_3/runme-gcc.sh
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/snippets/snippet_3/
)
file(RENAME ${CMAKE_SOURCE_DIR}/snippets/snippet_3/snippet_3_gcc ${CMAKE_BINARY_DIR}/snippet_3_gcc)

add_executable(snippet_4 snippets/snippet_4.cpp)
