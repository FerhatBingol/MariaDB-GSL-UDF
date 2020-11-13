# Find GSL
# ~~~~~~~~~
# Copyright (c) 2020, Ferhat Bingöl <ferhatbingol@ustunenerji.com>
# (based on FindGEOS.cmake by Mateusz Loskot <mateusz@loskot.net>)
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.
#
# CMake module to search for GSL library
#
# If it's found it sets GSL_FOUND to TRUE
# and following variables are set:
#    GSL_INCLUDE_DIR
#    GSL_LIBRARY
#


IF(WIN32)

  IF (MINGW)
    FIND_PATH(GSL_INCLUDE_DIR gsl_version.h /usr/local/include /usr/include/gsl c:/msys/local/include)
    FIND_LIBRARY(GSL_LIBRARY NAMES gsl PATHS /usr/local/lib /usr/lib c:/msys/local/lib)
  ENDIF (MINGW)

  IF (MSVC)
    FIND_PATH(GSL_INCLUDE_DIR gsl_version.h $ENV{LIB_DIR}/include $ENV{INCLUDE})
    FIND_LIBRARY(GSL_LIBRARY NAMES gsl PATHS 
      "$ENV{LIB}/lib"
      $ENV{LIB}
      #mingw
      c:/msys/local/lib
      NO_DEFAULT_PATH
      )
    IF (GSL_LIBRARY)
       SET (
         GSL_LIBRARY 
         GSL_LIBRARY;odbc32;odbccp32 
         CACHE STRING INTERNAL)
    ENDIF (GSL_LIBRARY)
  ENDIF (MSVC)
  
ELSE(WIN32)

 IF(UNIX) 

    # try to use framework on mac
    # want clean framework path, not unix compatibility path
    IF (APPLE)
      IF (CMAKE_FIND_FRAMEWORK MATCHES "FIRST"
          OR CMAKE_FRAMEWORK_PATH MATCHES "ONLY"
          OR NOT CMAKE_FIND_FRAMEWORK)
        SET (CMAKE_FIND_FRAMEWORK_save ${CMAKE_FIND_FRAMEWORK} CACHE STRING "" FORCE)
        SET (CMAKE_FIND_FRAMEWORK "ONLY" CACHE STRING "" FORCE)
        FIND_LIBRARY(GSL_LIBRARY GSL)
        IF (GSL_LIBRARY)
          # they're all the same in a framework
          SET (GSL_INCLUDE_DIR ${GSL_LIBRARY}/Headers CACHE PATH "Path to a file.")
          # set GSL_CONFIG to make later test happy, not used here, may not exist
          SET (GSL_CONFIG ${GSL_LIBRARY}/unix/bin/gsl-config CACHE FILEPATH "Path to a program.")
          # version in info.plist
          GET_VERSION_PLIST (${GSL_LIBRARY}/Resources/Info.plist GSL_VERSION)
          IF (NOT GSL_VERSION)
            MESSAGE (FATAL_ERROR "Could not determine GSL version from framework.")
          ENDIF (NOT GSL_VERSION)
          STRING(REGEX REPLACE "([0-9]+)\\.([0-9]+)\\.([0-9]+)" "\\1" GSL_VERSION_MAJOR "${GSL_VERSION}")
          STRING(REGEX REPLACE "([0-9]+)\\.([0-9]+)\\.([0-9]+)" "\\2" GSL_VERSION_MINOR "${GSL_VERSION}")
          IF (GSL_VERSION_MAJOR LESS 2)
            MESSAGE (FATAL_ERROR "GSL version is too old (${GSL_VERSION}). Use 2.5.0 or higher.")
          ENDIF (GSL_VERSION_MAJOR LESS 2)
        ENDIF (GSL_LIBRARY)
        SET (CMAKE_FIND_FRAMEWORK ${CMAKE_FIND_FRAMEWORK_save} CACHE STRING "" FORCE)
      ENDIF ()
    ENDIF (APPLE)

    IF (NOT GSL_INCLUDE_DIR OR NOT GSL_LIBRARY OR NOT GSL_CONFIG)
      # didn't find OS X framework, and was not set by user
      SET(GSL_CONFIG_PREFER_PATH "$ENV{GSL_HOME}/bin" CACHE STRING "preferred path to GSL (gsl-config)")
      FIND_PROGRAM(GSL_CONFIG gsl-config
          ${GSL_CONFIG_PREFER_PATH}
          /usr/local/bin/
          /usr/bin/
          )
      #MESSAGE("DBG GSL_CONFIG ${GSL_CONFIG}")

      IF (GSL_CONFIG)
      
        EXEC_PROGRAM(${GSL_CONFIG}
            ARGS --version
            OUTPUT_VARIABLE GSL_VERSION)
        STRING(REGEX REPLACE "([0-9]+)\\.([0-9]+)\\.([0-9]+)" "\\1" GSL_VERSION_MAJOR "${GSL_VERSION}")
        STRING(REGEX REPLACE "([0-9]+)\\.([0-9]+)\\.([0-9]+)" "\\2" GSL_VERSION_MINOR "${GSL_VERSION}")

        IF (GSL_VERSION_MAJOR LESS 2)
          MESSAGE (FATAL_ERROR "GSL version is too old (${GSL_VERSION}). Use 2.5.0 or higher.")
        ENDIF (GSL_VERSION_MAJOR LESS 2)
     
        # set INCLUDE_DIR to prefix+include
        EXEC_PROGRAM(${GSL_CONFIG}
            ARGS --prefix
            OUTPUT_VARIABLE GSL_PREFIX)

        FIND_PATH(GSL_INCLUDE_DIR 
            gsl_version.h 
            ${GSL_PREFIX}/include
            /usr/local/include 
            /usr/include 
            /usr/include/gsl
            )

        ## extract link dirs for rpath  
        EXEC_PROGRAM(${GSL_CONFIG}
            ARGS --libs
            OUTPUT_VARIABLE GSL_CONFIG_LIBS )

        ## split off the link dirs (for rpath)
        ## use regular expression to match wildcard equivalent "-L*<endchar>"
        ## with <endchar> is a space or a semicolon
        STRING(REGEX MATCHALL "[-][L]([^ ;])+" 
            GSL_LINK_DIRECTORIES_WITH_PREFIX 
            "${GSL_CONFIG_LIBS}" )
        #MESSAGE("DBG  GSL_LINK_DIRECTORIES_WITH_PREFIX=${GSL_LINK_DIRECTORIES_WITH_PREFIX}")

        ## remove prefix -L because we need the pure directory for LINK_DIRECTORIES
      
        IF (GSL_LINK_DIRECTORIES_WITH_PREFIX)
          STRING(REGEX REPLACE "[-][L]" "" GSL_LINK_DIRECTORIES ${GSL_LINK_DIRECTORIES_WITH_PREFIX} )
        ENDIF (GSL_LINK_DIRECTORIES_WITH_PREFIX)

        ### XXX - mloskot: gsl-config --libs does not return -lGSL_c, so set it manually
        ## split off the name
        ## use regular expression to match wildcard equivalent "-l*<endchar>"
        ## with <endchar> is a space or a semicolon
        #STRING(REGEX MATCHALL "[-][l]([^ ;])+" 
        #  GSL_LIB_NAME_WITH_PREFIX 
        #  "${GSL_CONFIG_LIBS}" )
        #MESSAGE("DBG  GSL_CONFIG_LIBS=${GSL_CONFIG_LIBS}")
        #MESSAGE("DBG  GSL_LIB_NAME_WITH_PREFIX=${GSL_LIB_NAME_WITH_PREFIX}")
        SET(GSL_LIB_NAME_WITH_PREFIX -lgsl CACHE STRING INTERNAL)

        ## remove prefix -l because we need the pure name
      
        IF (GSL_LIB_NAME_WITH_PREFIX)
          STRING(REGEX REPLACE "[-][l]" "" GSL_LIB_NAME ${GSL_LIB_NAME_WITH_PREFIX} )
        ENDIF (GSL_LIB_NAME_WITH_PREFIX)
        #MESSAGE("DBG  GSL_LIB_NAME=${GSL_LIB_NAME}")

        IF (APPLE)
          IF (NOT GSL_LIBRARY)
            # work around empty GSL_LIBRARY left by framework check
            # while still preserving user setting if given
            # ***FIXME*** need to improve framework check so below not needed
            SET(GSL_LIBRARY ${GSL_LINK_DIRECTORIES}/lib${GSL_LIB_NAME}.dylib CACHE STRING INTERNAL FORCE)
          ENDIF (NOT GSL_LIBRARY)
        ELSE (APPLE)
          SET(GSL_LIBRARY ${GSL_LINK_DIRECTORIES}/lib${GSL_LIB_NAME}.so CACHE STRING INTERNAL)
        ENDIF (APPLE)
        #MESSAGE("DBG  GSL_LIBRARY=${GSL_LIBRARY}")
      
      ELSE(GSL_CONFIG)
        MESSAGE("FindGSL.cmake: gsl-config not found. Please set it manually. GSL_CONFIG=${GSL_CONFIG}")
      ENDIF(GSL_CONFIG)
    ENDIF(NOT GSL_INCLUDE_DIR OR NOT GSL_LIBRARY OR NOT GSL_CONFIG)
  ENDIF(UNIX)
ENDIF(WIN32)


IF (GSL_INCLUDE_DIR AND GSL_LIBRARY)
   SET(GSL_FOUND TRUE)
ENDIF (GSL_INCLUDE_DIR AND GSL_LIBRARY)

IF (GSL_FOUND)

   IF (NOT GSL_FIND_QUIETLY)
      MESSAGE(STATUS "Found GSL: ${GSL_LIBRARY}")
   ENDIF (NOT GSL_FIND_QUIETLY)

ELSE (GSL_FOUND)

   MESSAGE(GSL_INCLUDE_DIR=${GSL_INCLUDE_DIR})
   MESSAGE(GSL_LIBRARY=${GSL_LIBRARY})
   MESSAGE(FATAL_ERROR "Could not find GSL")

ENDIF (GSL_FOUND)
