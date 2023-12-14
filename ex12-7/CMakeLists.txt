cmake_minimum_required(VERSION 3.5)

project(ex12-7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex12-7
    sayings2.cpp string1.cpp string1.h)

include(GNUInstallDirs)
install(TARGETS ex12-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
