/* MariaDB UDF PACKAGE
	by	Ferhat Bingöl 
      ferhatbingol@ustunenerji.com

    USTUN Energy Engineering LLC 
    www.USTUNEnerji.com
    Protected with AGPL-3.0 License
*/

/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_log.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_log.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_log.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_log.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_log.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_log;
            CREATE function Mgsl_sf_log RETURNS REAL SONAME 'Mgsl_sf_log.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_log_abs;
            CREATE function Mgsl_sf_log_abs RETURNS REAL SONAME 'Mgsl_sf_log.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_log_1plusx;
            CREATE function Mgsl_sf_log_1plusx RETURNS REAL SONAME 'Mgsl_sf_log.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_log_1plusx_mx;
            CREATE function Mgsl_sf_log_1plusx_mx RETURNS REAL SONAME 'Mgsl_sf_log.so';            
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
#include "gsl/gsl_sf_log.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_log.h
            // SRC FUNCTION : double gsl_sf_log(const double x);
            DLLEXP my_bool	Mgsl_sf_log_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_log_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_log		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_log.h
            // SRC FUNCTION : double gsl_sf_log_abs(const double x);
            DLLEXP my_bool	Mgsl_sf_log_abs_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_log_abs_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_log_abs		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_log.h
            // SRC FUNCTION : double gsl_sf_log_1plusx(const double x);
            DLLEXP my_bool	Mgsl_sf_log_1plusx_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_log_1plusx_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_log_1plusx		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_log.h
            // SRC FUNCTION : double gsl_sf_log_1plusx_mx(const double x);
            DLLEXP my_bool	Mgsl_sf_log_1plusx_mx_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_log_1plusx_mx_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_log_1plusx_mx		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_log(const double x);
            my_bool Mgsl_sf_log_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_log needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_log could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_log_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_log(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_log(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_log_abs(const double x);
            my_bool Mgsl_sf_log_abs_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_log_abs needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_log_abs could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_log_abs_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_log_abs(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_log_abs(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_log_1plusx(const double x);
            my_bool Mgsl_sf_log_1plusx_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_log_1plusx needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_log_1plusx could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_log_1plusx_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_log_1plusx(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_log_1plusx(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_log_1plusx_mx(const double x);
            my_bool Mgsl_sf_log_1plusx_mx_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_log_1plusx_mx needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_log_1plusx_mx could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_log_1plusx_mx_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_log_1plusx_mx(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_log_1plusx_mx(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */
