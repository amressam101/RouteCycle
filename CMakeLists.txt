cmake_minimum_required(VERSION 3.27)
project(RouteCycle)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RouteCycle
        main.cpp
        Person.cpp
        Client.cpp
        Employee.cpp
        Admin.cpp
        FileManager.cpp
        Parser.cpp
        FileHelper.cpp

)