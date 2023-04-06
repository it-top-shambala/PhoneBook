cmake_minimum_required(VERSION 3.25)
project(PhoneBook)

set(CMAKE_CXX_STANDARD 17)

add_executable(PhoneBook main.cpp Person.h PhoneBook.h ConsoleHelper.h)
