cmake_minimum_required(VERSION 3.5)

project(exE-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exE-1
    memb_pt.cpp)

include(GNUInstallDirs)
install(TARGETS exE-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
