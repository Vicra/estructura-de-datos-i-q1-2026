cmake_minimum_required(VERSION 3.19)
project(stackLL LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(stackLL
    main.cpp
    stacknode.h stacknode.cpp
    stack.h stack.cpp
)

target_link_libraries(stackLL
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS stackLL
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
