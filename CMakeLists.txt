cmake_minimum_required (VERSION 3.16)
project (MariaDB-GSL-UDF)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
set(CMAKE_COLOR_MAKEFILE ON)
set(HAVE_DYNAMIC_LOADING 1)

message(STATUS "c++ compiler ... " ${CMAKE_C_COMPILER})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})




if(WIN32)
    set(LIB_INSTALL_PATH ${CMAKE_CURRENT_BINARY_DIR}/lib/)
elseif(UNIX)
    set(LIB_INSTALL_PATH lib/)
endif()

# uninstall target
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

    # set path to additional CMake modules
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

# needed packages
find_package(GSL REQUIRED)
if(GSL_FOUND)
    include_directories(${GSL_INCLUDE_DIR})
    link_directories(${GSL_LIBRARY})
endif(GSL_FOUND)

find_package(MARIADB REQUIRED)
if (MARIADB_FOUND)
    include_directories(${MARIADB_INCLUDE_DIR})
    link_directories(${MARIADB_LIBRARY})
endif(MARIADB_FOUND)

if(MSVC)
  option(BUILD_RELEASE_DEBUG_DIRS "Set OFF to build each configuration to a separate directory" OFF)
  mark_as_advanced(BUILD_RELEASE_DEBUG_DIRS)
endif()

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)
	

# For windows, do not allow the compiler to use default target (Vista).
if(WIN32)
  add_definitions(-D_WIN32_WINNT=0x0501 -D_USRDLL)
endif(WIN32)

file(GLOB MSUDF_SRC
    "*.c"
)

ADD_LIBRARY(MSUDF SHARED ${MSUDF_SRC})
SET_TARGET_PROPERTIES(MSUDF PROPERTIES OUTPUT_NAME "MariaDB-GSL-UDF")

#ADD_LIBRARY(MSUDF-static STATIC ${MSUDF_SRC})
#SET_TARGET_PROPERTIES(MSUDF-static PROPERTIES OUTPUT_NAME "MariaDB-GSL-UDF")
#SET_TARGET_PROPERTIES(MSUDF-static PROPERTIES PREFIX "lib")

if(MSVC)
  set(CMAKE_DEBUG_POSTFIX "d")
  add_definitions(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
  add_definitions(-D_MBCS)
endif(MSVC)


#/D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "STRICT" /D "_USRDLL" /D "_WINDLL" /D "_MBCS"-DCHANGE_BY_BISHOP
    
add_definitions(-DSTRICT)
add_definitions(-DHAVE_DLOPEN)

add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

if(WIN32)
  # Postfix of DLLs:
  set(LIB_DEBUG_POSTFIX d)
else()
  # Postfix of so's:
  set(LIB_DEBUG_POSTFIX)
endif()

if(GSL_FOUND)
    target_link_libraries(MSUDF ${GSL_LIBRARY})
    # target_link_libraries(MSUDF-static  ${GSL_LIBRARY})
endif(GSL_FOUND)

if (MARIADB_PLUGIN_DIR)
	INSTALL(TARGETS MSUDF DESTINATION ${MARIADB_PLUGIN_DIR})
endif(MARIADB_PLUGIN_DIR)

configure_file (
  "${PROJECT_SOURCE_DIR}/MariaDB-GSL-UDF.sql.in"
  "${PROJECT_SOURCE_DIR}/MariaDB-GSL-UDF.sql"
  )

