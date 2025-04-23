cmake_minimum_required(VERSION 4.0.1)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    if(DEFINED ENV{VCPKG_ROOT})
        set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
    else()
        message(WARNING "VCPKG_ROOT is not set. Please define the environment variable to your vcpkg path.")
    endif()
endif()

project(Pong VERSION 0.1.0 LANGUAGES C CXX)

find_package(raylib CONFIG REQUIRED)
add_executable(myraylib main.cpp)

target_link_libraries(myraylib PRIVATE raylib)
