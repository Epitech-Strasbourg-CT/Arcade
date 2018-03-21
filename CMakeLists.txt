project(arcade)

cmake_minimum_required(VERSION 3.8)

set(CMAKE_EXE_LINKER_FLAGS "-W -Wall -Wextra -g ")

set(sources

        #core

        core/main.cpp
        core/DLLoader.hpp
        core/Core.cpp
        core/Core.hpp

        #games

        games/game1/entry.cpp
        games/game2/entry.cpp

        #libs



        )

add_executable(arcade ${sources})

target_include_directories(arcade PRIVATE .)