cmake_minimum_required(VERSION 3.9)
project(Algoritmi)

set(CMAKE_CXX_STANDARD 11)

add_executable(Algoritmi main.cpp Date.cpp Date.h GeneralUser.cpp GeneralUser.h NoticeBoard.cpp NoticeBoard.h CompanyUser.h  CompanyUser.cpp  GroupUser.h GroupUser.cpp Graph.h Graph.cpp)

# Il linker genera degli errori in CompanyUser.cpp CompanyUser.h e in Graph.h e Graph.cpp --correggere.