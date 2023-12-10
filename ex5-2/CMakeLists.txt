cmake_minimum_required(VERSION 3.5)

project(ex5-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex5-2
    num_test.cpp)

include(GNUInstallDirs)
install(TARGETS ex5-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
