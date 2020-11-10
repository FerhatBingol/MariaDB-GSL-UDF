/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_elljac.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_elljac.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_elljac.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_elljac.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_elljac.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
-------------------------------------------------------------------
*/

#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(WIN32)
#define DLLEXP __declspec(dllexport) 
#else
    #define DLLEXP
#endif

#include <mysql.h>
#include <mariadb_ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "gsl/gsl_sf_elljac.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

#ifdef	__cplusplus
}
#endif
#endif /* HAVE_DLOPEN */