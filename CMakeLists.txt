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
        src/ActivityWidget.h )

target_link_libraries(agendaProgrammazione Qt5::Widgets )

enable_testing()

add_executable(agendaProgrammazione_test test/ActivityTest.cpp test/DateTest.cpp test/TimeTest.cpp test/RunAllTests.cpp src/Date.h
        src/Date.cpp
        src/Time.h
        src/Time.cpp
        src/Activity.h
        src/Activity.cpp
        src/Board.h
        src/Board.cpp
        src/SubActivity.h
        src/SubActivity.cpp )

target_link_libraries(agendaProgrammazione_test gtest gtest_main)

add_test(NAME agendaProgrammazione_test COMMAND agendaProgrammazione_test)

