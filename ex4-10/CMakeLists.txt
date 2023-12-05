cmake_minimum_required(VERSION 3.5)

project(ex4-10 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex4-10
    strtype4.cpp)

include(GNUInstallDirs)
install(TARGETS ex4-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
