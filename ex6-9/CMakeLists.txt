cmake_minimum_required(VERSION 3.5)

project(ex6-9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex6-9
    condit.cpp)

include(GNUInstallDirs)
install(TARGETS ex6-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
