cmake_minimum_required(VERSION 3.5)

project(ex10-6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex10-6
    stock10.cpp stock10.h usestock1.cpp)

include(GNUInstallDirs)
install(TARGETS ex10-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
