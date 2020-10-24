cmake_minimum_required(VERSION 3.17)
project(DatabaseProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cmake-build-debug)
include_directories(DatabaseProject)

add_executable(DatabaseProject
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/Project.cbp
        DatabaseProject/boost_x64_release.props
        DatabaseProject/data
        DatabaseProject/DatabaseProject.vcxproj
        DatabaseProject/DatabaseProject.vcxproj.filters
        DatabaseProject/Main.cpp
        DatabaseProject/main.o
        DatabaseProject/Makefile
        DatabaseProject/ReadStream.cpp
        DatabaseProject/ReadStream.h
        DatabaseProject/ReadStream.o
        DatabaseProject/test.txt
        DatabaseProject/WriteStream.cpp
        DatabaseProject/WriteStream.h
        DatabaseProject/WriteStream.o
        CMakeLists.txt
        DatabaseProject.sln)
