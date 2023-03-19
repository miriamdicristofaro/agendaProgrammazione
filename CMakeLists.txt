cmake_minimum_required(VERSION 3.23)
project(agendaProgrammazione)

set(CMAKE_CXX_STANDARD 14)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Find the QtWidgets library
find_package(Qt5Widgets REQUIRED)

add_executable(agendaProgrammazione src/main.cpp
        src/ActivityController.cpp
        src/ActivityController.h
        src/Board.cpp
        src/Board.h
        src/MainWindow.cpp
        src/MainWindow.h
        src/Activity.cpp
        src/Activity.h
        src/SubActivity.cpp
        src/SubActivity.h
        src/Date.cpp
        src/Date.h
        src/Time.cpp
        src/Time.h
        src/Subject.h
        src/Observer.h
        src/SubActivityDialog.cpp
        src/SubActivityDialog.h
        src/BoardController.cpp
        src/BoardController.h
        src/ActivityWidget.cpp
        src/ActivityWidget.h)

target_link_libraries(agendaProgrammazione Qt5::Widgets)
