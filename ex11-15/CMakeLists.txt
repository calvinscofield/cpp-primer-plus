cmake_minimum_required(VERSION 3.5)

project(ex11-15 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex11-15
    randwalk.cpp vect.cpp vect.h)

include(GNUInstallDirs)
install(TARGETS ex11-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
