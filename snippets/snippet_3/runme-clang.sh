clang++ --std=c++20 global.cppm --precompile -o global.pcm
clang++ --std=c++20 main.cpp -fprebuilt-module-path=. global.pcm -o snippet_3_clang