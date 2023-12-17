cmake_minimum_required(VERSION 3.5)

project(ex13-6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex13-6
    tabtenn1.cpp tabtenn1.h usett1.cpp)

include(GNUInstallDirs)
install(TARGETS ex13-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
