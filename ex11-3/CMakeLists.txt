cmake_minimum_required(VERSION 3.5)

project(ex11-3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex11-3
    mytime0.cpp mytime0.h usetime0.cpp)

include(GNUInstallDirs)
install(TARGETS ex11-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
