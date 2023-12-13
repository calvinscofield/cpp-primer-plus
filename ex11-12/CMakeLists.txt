cmake_minimum_required(VERSION 3.5)

project(ex11-12 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex11-12
    mytime3.cpp mytime3.h usetime3.cpp)

include(GNUInstallDirs)
install(TARGETS ex11-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
