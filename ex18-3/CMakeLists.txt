cmake_minimum_required(VERSION 3.5)

project(ex18-3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex18-3
    stdmove.cpp)

include(GNUInstallDirs)
install(TARGETS ex18-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
