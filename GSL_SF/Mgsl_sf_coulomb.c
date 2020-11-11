/* MariaDB UDF PACKAGE
	by	Ferhat Bingöl 
      ferhatbingol@ustunenerji.com

    USTUN Energy Engineering LLC 
    www.USTUNEnerji.com
    Protected with AGPL-3.0 License
*/

/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_coulomb.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_coulomb.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_coulomb.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_coulomb.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_coulomb.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_hydrogenicR_1;
            CREATE function Mgsl_sf_hydrogenicR_1 RETURNS REAL SONAME 'Mgsl_sf_coulomb.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hydrogenicR;
            CREATE function Mgsl_sf_hydrogenicR RETURNS REAL SONAME 'Mgsl_sf_coulomb.so';            
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
#include "gsl/gsl_sf_coulomb.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_coulomb.h
            // SRC FUNCTION : double gsl_sf_hydrogenicR_1(const double Z, const double r);
            DLLEXP my_bool	Mgsl_sf_hydrogenicR_1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hydrogenicR_1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hydrogenicR_1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_coulomb.h
            // SRC FUNCTION : double gsl_sf_hydrogenicR(const int n, const int l, const double Z, const double r);
            DLLEXP my_bool	Mgsl_sf_hydrogenicR_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hydrogenicR_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hydrogenicR		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_hydrogenicR_1(const double Z, const double r);
            my_bool Mgsl_sf_hydrogenicR_1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_hydrogenicR_1 needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hydrogenicR_1 could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hydrogenicR_1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hydrogenicR_1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hydrogenicR_1(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hydrogenicR(const int n, const int l, const double Z, const double r);
            my_bool Mgsl_sf_hydrogenicR_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_hydrogenicR needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hydrogenicR could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=INT_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hydrogenicR_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hydrogenicR(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hydrogenicR(*((const int *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */
