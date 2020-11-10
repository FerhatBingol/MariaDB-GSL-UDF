/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_mathieu.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_mathieu.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_mathieu.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_mathieu.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_mathieu.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_mathieu_a;
            CREATE function Mgsl_sf_mathieu_a RETURNS REAL SONAME 'Mgsl_sf_mathieu.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_mathieu_b;
            CREATE function Mgsl_sf_mathieu_b RETURNS REAL SONAME 'Mgsl_sf_mathieu.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_mathieu_ce;
            CREATE function Mgsl_sf_mathieu_ce RETURNS REAL SONAME 'Mgsl_sf_mathieu.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_mathieu_se;
            CREATE function Mgsl_sf_mathieu_se RETURNS REAL SONAME 'Mgsl_sf_mathieu.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_mathieu_Mc;
            CREATE function Mgsl_sf_mathieu_Mc RETURNS REAL SONAME 'Mgsl_sf_mathieu.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_mathieu_Ms;
            CREATE function Mgsl_sf_mathieu_Ms RETURNS REAL SONAME 'Mgsl_sf_mathieu.so';            
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
#include "gsl/gsl_sf_mathieu.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_mathieu.h
            // SRC FUNCTION : double gsl_sf_mathieu_a(int order, double qq);
            DLLEXP my_bool	Mgsl_sf_mathieu_a_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_mathieu_a_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_mathieu_a		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_mathieu.h
            // SRC FUNCTION : double gsl_sf_mathieu_b(int order, double qq);
            DLLEXP my_bool	Mgsl_sf_mathieu_b_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_mathieu_b_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_mathieu_b		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_mathieu.h
            // SRC FUNCTION : double gsl_sf_mathieu_ce(int order, double qq, double zz);
            DLLEXP my_bool	Mgsl_sf_mathieu_ce_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_mathieu_ce_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_mathieu_ce		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_mathieu.h
            // SRC FUNCTION : double gsl_sf_mathieu_se(int order, double qq, double zz);
            DLLEXP my_bool	Mgsl_sf_mathieu_se_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_mathieu_se_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_mathieu_se		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_mathieu.h
            // SRC FUNCTION : double gsl_sf_mathieu_Mc(int kind, int order, double qq, double zz);
            DLLEXP my_bool	Mgsl_sf_mathieu_Mc_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_mathieu_Mc_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_mathieu_Mc		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_mathieu.h
            // SRC FUNCTION : double gsl_sf_mathieu_Ms(int kind, int order, double qq, double zz);
            DLLEXP my_bool	Mgsl_sf_mathieu_Ms_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_mathieu_Ms_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_mathieu_Ms		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_mathieu_a(int order, double qq);
            my_bool Mgsl_sf_mathieu_a_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_mathieu_a needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_mathieu_a could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_mathieu_a_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_mathieu_a(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_mathieu_a(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_mathieu_b(int order, double qq);
            my_bool Mgsl_sf_mathieu_b_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_mathieu_b needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_mathieu_b could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_mathieu_b_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_mathieu_b(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_mathieu_b(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_mathieu_ce(int order, double qq, double zz);
            my_bool Mgsl_sf_mathieu_ce_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_mathieu_ce needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_mathieu_ce could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_mathieu_ce_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_mathieu_ce(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_mathieu_ce(*((const int *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_mathieu_se(int order, double qq, double zz);
            my_bool Mgsl_sf_mathieu_se_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_mathieu_se needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_mathieu_se could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_mathieu_se_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_mathieu_se(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_mathieu_se(*((const int *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_mathieu_Mc(int kind, int order, double qq, double zz);
            my_bool Mgsl_sf_mathieu_Mc_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_mathieu_Mc needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_mathieu_Mc could not allocate memory for double");
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

            
                void Mgsl_sf_mathieu_Mc_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_mathieu_Mc(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_mathieu_Mc(*((const int *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_mathieu_Ms(int kind, int order, double qq, double zz);
            my_bool Mgsl_sf_mathieu_Ms_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_mathieu_Ms needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_mathieu_Ms could not allocate memory for double");
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

            
                void Mgsl_sf_mathieu_Ms_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_mathieu_Ms(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_mathieu_Ms(*((const int *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */