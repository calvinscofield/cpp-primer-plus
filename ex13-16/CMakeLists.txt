cmake_minimum_required(VERSION 3.5)

project(ex13-16 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex13-16
    dma.cpp dma.h usedma.cpp)

include(GNUInstallDirs)
install(TARGETS ex13-16
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
