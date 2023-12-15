cmake_minimum_required(VERSION 3.5)

project(ex12-12 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex12-12
    bank.cpp queue.cpp queue.h)

include(GNUInstallDirs)
install(TARGETS ex12-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
