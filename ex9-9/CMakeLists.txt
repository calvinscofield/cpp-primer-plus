cmake_minimum_required(VERSION 3.5)

project(ex9-9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex9-9
    static.cpp)

include(GNUInstallDirs)
install(TARGETS ex9-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
