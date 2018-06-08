cmake_minimum_required(VERSION 3.9)
project(Algoritmi)

set(CMAKE_CXX_STANDARD 11)

add_executable(Algoritmi main.cpp Graph.cpp Graph.h Date.cpp Date.h GeneralUser.cpp GeneralUser.h GroupUser.cpp GroupUser.h NoticeBoard.cpp NoticeBoard.h CompanyUser.cpp CompanyUser.h)

# Il linker genera degli errori in CompanyUser.cpp CompanyUser.h e in Graph.h e Graph.cpp --correggere.