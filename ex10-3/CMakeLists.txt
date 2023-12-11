cmake_minimum_required(VERSION 3.5)

project(ex10-3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex10-3
    stock00.cpp stock00.h usestock0.cpp)

include(GNUInstallDirs)
install(TARGETS ex10-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
