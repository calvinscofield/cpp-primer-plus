cmake_minimum_required(VERSION 3.5)

project(ex5-14 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex5-14
    waiting.cpp)

include(GNUInstallDirs)
install(TARGETS ex5-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
