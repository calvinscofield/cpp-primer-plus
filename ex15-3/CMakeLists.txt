cmake_minimum_required(VERSION 3.5)

project(ex15-3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex15-3
    tv.cpp tv.h use_tv.cpp)

include(GNUInstallDirs)
install(TARGETS ex15-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
