cmake_minimum_required(VERSION 3.5)

project(ex15-6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex15-6
    nested.cpp queuetp.h)

include(GNUInstallDirs)
install(TARGETS ex15-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
