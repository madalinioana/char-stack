cmake_minimum_required(VERSION 3.26)
project(Proiectul-1)

set(CMAKE_CXX_STANDARD 98)

add_executable(Proiectul-1 main.cpp
        CharStack.cpp
	CharStack.h
        Node.cpp
        Node.h
        test/Test.cpp
        test/Test.h)
