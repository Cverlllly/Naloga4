cmake_minimum_required(VERSION 3.27)
project(Naloga4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Naloga4 main.cpp
        Location.cpp
        Location.h
        Event.h
        Event.cpp
        Date.h
        Date.cpp
        EventOrganizer.cpp
        EventOrganizer.h
        Concert.cpp
        Concert.h)
