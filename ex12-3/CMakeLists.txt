cmake_minimum_required(VERSION 3.5)

project(ex12-3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex12-3
    strngbad.cpp strngbad.h vegnews.cpp)

include(GNUInstallDirs)
install(TARGETS ex12-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
