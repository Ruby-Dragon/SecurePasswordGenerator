cmake_minimum_required(VERSION 3.21)
project(SecurePasswordGenerator)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(SecurePasswordGenerator
        src/arguments.cpp
        src/arguments.hpp
        src/main.cpp
        src/random.cpp
        src/random.hpp
        src/words.cpp
        src/words.hpp)
