cmake_minimum_required(VERSION 3.23)
project(agendaProgrammazione)

set(CMAKE_CXX_STANDARD 14)

add_executable(agendaProgrammazione main.cpp Board.cpp Board.h MainWindow.cpp MainWindow.h Activity.cpp Activity.h SubActivity.cpp SubActivity.h Date.cpp Date.h Time.cpp Time.h)
