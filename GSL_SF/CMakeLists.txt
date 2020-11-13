cmake_minimum_required (VERSION 3.16)
project (MariaDB-GSL-UDF)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
set(CMAKE_COLOR_MAKEFILE ON)

message(STATUS "c++ compiler ... " ${CMAKE_C_COMPILER})