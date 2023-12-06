cmake_minimum_required(VERSION 3.5)

project(ex5-18 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(textin3
    textin3.cpp)

include(GNUInstallDirs)
install(TARGETS textin3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
