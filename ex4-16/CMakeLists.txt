cmake_minimum_required(VERSION 3.5)

project(ex4-16 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex4-16
    init_ptr.cpp)

include(GNUInstallDirs)
install(TARGETS ex4-16
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
