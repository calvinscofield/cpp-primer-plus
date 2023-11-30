cmake_minimum_required(VERSION 3.5)

project(ex2-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex2-1 myfirst.cpp)

include(GNUInstallDirs)
install(TARGETS ex2-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
