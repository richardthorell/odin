cmake_minimum_required(VERSION 3.16)
project(odin LANGUAGES CXX)

# Define header-only interface library
add_library(odin INTERFACE)

# Specify the include directory
target_include_directories(odin INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

# Require C++17 or newer
target_compile_features(odin INTERFACE cxx_std_17)