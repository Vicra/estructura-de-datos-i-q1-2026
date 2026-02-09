cmake_minimum_required(VERSION 3.19)
project(stackArray LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(stackArray
    main.cpp
    stackarr.h stackarr.cpp
)

target_link_libraries(stackArray
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS stackArray
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
