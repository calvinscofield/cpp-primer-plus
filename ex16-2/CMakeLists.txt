cmake_minimum_required(VERSION 3.5)

project(ex16-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex16-2
    strfile.cpp)

include(GNUInstallDirs)
install(TARGETS ex16-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
