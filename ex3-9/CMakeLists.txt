cmake_minimum_required(VERSION 3.5)

project(ex3-9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex3-9
    fltadd.cpp)

include(GNUInstallDirs)
install(TARGETS ex3-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
