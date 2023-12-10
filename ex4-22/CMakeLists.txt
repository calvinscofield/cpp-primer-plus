cmake_minimum_required(VERSION 3.5)

project(ex4-22 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex4-22
    delete.cpp)

include(GNUInstallDirs)
install(TARGETS ex4-22
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
