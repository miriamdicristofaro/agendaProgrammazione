#Test project
cmake_minimum_required(VERSION 3.5)


add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_FILES
        ../src/Date.h
        ../src/Date.cpp
        ../src/Time.h
        ../src/Time.cpp
        ../src/Activity.h
        ../src/Activity.cpp
        ../src/Board.h
        ../src/Board.cpp
        ../src/SubActivity.h
        ../src/SubActivity.cpp)

add_library(core ${SOURCE_FILES} )

set(TEST_SOURCE_FILES runAllTests.cpp DateTest.cpp TimeTest.cpp  ActivityTest.cpp)
add_executable(agendaProgrammazioneTests ${TEST_SOURCE_FILES})
target_link_libraries(agendaProgrammazioneTests gtest gtest_main core)

