cmake_minimum_required(VERSION 3.30)
project(task_manager)

set(CMAKE_CXX_STANDARD 20)

add_executable(task_manager main.cpp
        Task.cpp
        Task.h
        TaskManager.cpp
        TaskManager.h
        Enums.h
        Enums.cpp)
