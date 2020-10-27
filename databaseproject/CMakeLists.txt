cmake_minimum_required(VERSION 3.17)
project(database_project)
#set libraries
set(Boost_INCLUDE_DIR /usr/local/Cellar/boost/1.73.0/include)
set(Boost_LIBRARY_DIR /usr/local/Cellar/boost/1.73.0/lib)
find_package(Boost 1.73.0)
include_directories(${Boost_INCLUDE_DIR})

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()

#set variable for files and headers
set(SRCS
        Main.cpp
        ReadStream.cpp
        WriteStream.cpp
        StreamException.cpp StreamException.h)
set(HEADERS
        ReadStream.h
        WriteStream.h
        )
# set version
set(CMAKE_CXX_STANDARD 14)
include_directories(..)
include_directories(../.idea)
# create executable
add_executable(${PROJECT_NAME} ${SRCS})
if(MINGW)
    target_link_libraries(${PROJECT_NAME} ws2_32)
    target_link_libraries(${PROJECT_NAME} -lws2_32 -lwsock32 )
endif()
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARY})

