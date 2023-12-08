cmake_minimum_required(VERSION 3.5)

project(ex7-6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex7-6
    arrfun2.cpp)

include(GNUInstallDirs)
install(TARGETS ex7-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
