cmake_minimum_required(VERSION 3.10)

project(MyDynamicLibraryProject)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Создание динамической библиотеки
add_library(Leaver SHARED
    src/Leaver.cpp
)

target_include_directories(Leaver PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_compile_definitions(Leaver PRIVATE BUILDING_DLL)

# Создание основного приложения
add_executable(main
    main/main.cpp
)

# Линковка основного приложения с библиотекой
target_link_libraries(main Leaver)
