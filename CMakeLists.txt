cmake_minimum_required(VERSION 3.5)
project(NTRU)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp NTRU.cpp NTRU.h)

add_executable(NTRU ${SOURCE_FILES})

# Link NTL
set(NTL_LIB "C:/msys64/mingw64/lib/libntl.a")
target_link_libraries(NTRU ${NTL_LIB})

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

