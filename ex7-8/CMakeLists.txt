cmake_minimum_required(VERSION 3.5)

project(ex7-8 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex7-8
    arrfun4.cpp)

include(GNUInstallDirs)
install(TARGETS ex7-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
