cmake_minimum_required(VERSION 3.29.2)

project(CCSP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Wpedantic -Werror)

include_directories(./include)

file(GLOB SOURCES ./source/*.cpp)

foreach(SOURCE ${SOURCES})
  if (NOT ${SOURCE} MATCHES main.cpp)
    get_filename_component(LIBRARY ${SOURCE} NAME_WE)

    add_library(${LIBRARY} SHARED ${SOURCE})
  endif()
endforeach(SOURCE)

add_executable(${PROJECT_NAME} ./source/main.cpp ${SOURCES})
