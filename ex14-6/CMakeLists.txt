cmake_minimum_required(VERSION 3.5)

project(ex14-6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex14-6
    student.cpp studenti.h use_stui.cpp)

include(GNUInstallDirs)
install(TARGETS ex14-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
