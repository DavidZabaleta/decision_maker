cmake_minimum_required(VERSION 3.17)
project(Reto2_Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(Reto2_Project src/main.cpp src/models/Chapters.h src/usecases/Finder.cpp src/usecases/Utils.cpp src/headers/Utils.h src/usecases/ProcessExecutor.cpp src/headers/ProcessExecutor.h src/models/Process.h src/headers/Finder.h)