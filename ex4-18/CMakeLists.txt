cmake_minimum_required(VERSION 3.5)

project(ex4-18 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex4-18
    arraynew.cpp)

include(GNUInstallDirs)
install(TARGETS ex4-18
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
