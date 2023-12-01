cmake_minimum_required(VERSION 3.5)

project(ex3-11 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex3-11
    divide.cpp)

include(GNUInstallDirs)
install(TARGETS ex3-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
