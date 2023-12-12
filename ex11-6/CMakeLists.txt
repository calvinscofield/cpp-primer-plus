cmake_minimum_required(VERSION 3.5)

project(ex11-6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex11-6
    mytime1.cpp mytime1.h usetime1.cpp)

include(GNUInstallDirs)
install(TARGETS ex11-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
