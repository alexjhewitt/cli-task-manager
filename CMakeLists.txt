cmake_minimum_required(VERSION 3.30)
project(task_manager)

set(CMAKE_CXX_STANDARD 20)

add_executable(task_manager main.cpp
        Enums.h
        Enums.cpp
        TaskManager.cpp
        TaskManager.h
        Task.cpp
        Task.h)
