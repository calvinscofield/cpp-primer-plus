cmake_minimum_required(VERSION 3.5)

project(ex3-5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex3-5
    chartype.cpp)

include(GNUInstallDirs)
install(TARGETS ex3-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
