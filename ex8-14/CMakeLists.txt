cmake_minimum_required(VERSION 3.5)

project(ex8-14 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex8-14
    temptempover.cpp)

include(GNUInstallDirs)
install(TARGETS ex8-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
