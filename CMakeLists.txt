cmake_minimum_required(VERSION 4.2)
project(CXX_Book_Borrowing_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(CXX_Book_Borrowing_System main.cpp
        "CPP Files/Library.cpp"
        "Headers/Library.h"
        "CPP Files/MainMenu.cpp"
        "Headers/MainMenu.h")
