cmake_minimum_required(VERSION 3.5)

project(ex8-12 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex8-12
    twotemps.cpp)

include(GNUInstallDirs)
install(TARGETS ex8-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
