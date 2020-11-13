/* MariaDB UDF PACKAGE
	by	Ferhat Bingöl 
      ferhatbingol@ustunenerji.com

    USTUN Energy Engineering LLC 
    www.USTUNEnerji.com
    Protected with AGPL-3.0 License
*/

/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_hyperg.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_hyperg.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_hyperg.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_hyperg.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_hyperg.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_0F1;
            CREATE function Mgsl_sf_hyperg_0F1 RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_1F1_int;
            CREATE function Mgsl_sf_hyperg_1F1_int RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_1F1;
            CREATE function Mgsl_sf_hyperg_1F1 RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_U_int;
            CREATE function Mgsl_sf_hyperg_U_int RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_U;
            CREATE function Mgsl_sf_hyperg_U RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_2F1;
            CREATE function Mgsl_sf_hyperg_2F1 RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_2F1_conj;
            CREATE function Mgsl_sf_hyperg_2F1_conj RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_2F1_renorm;
            CREATE function Mgsl_sf_hyperg_2F1_renorm RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hyperg_2F1_conj_renorm;
            CREATE function Mgsl_sf_hyperg_2F1_conj_renorm RETURNS REAL SONAME 'Mgsl_sf_hyperg.so';                     
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
#include "gsl/gsl_sf_hyperg.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_0F1(const double c, const double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_0F1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_0F1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_0F1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_1F1_int(const int m, const int n, double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_1F1_int_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_1F1_int_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_1F1_int		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_1F1(double a, double b, double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_1F1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_1F1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_1F1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_U_int(const int m, const int n, const double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_U_int_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_U_int_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_U_int		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_U(const double a, const double b, const double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_U_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_U_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_U		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_2F1(double a, double b, double c, double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_2F1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_2F1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_2F1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_2F1_conj(double aR, double aI, double c, double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_2F1_conj_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_2F1_conj_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_2F1_conj		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_2F1_renorm(double a, double b, double c, double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_2F1_renorm_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_2F1_renorm_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_2F1_renorm		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_hyperg.h
            // SRC FUNCTION : double gsl_sf_hyperg_2F1_conj_renorm(double aR, double aI, double c, double x);
            DLLEXP my_bool	Mgsl_sf_hyperg_2F1_conj_renorm_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hyperg_2F1_conj_renorm_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hyperg_2F1_conj_renorm		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);

            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_hyperg_0F1(const double c, const double x);
            my_bool Mgsl_sf_hyperg_0F1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_hyperg_0F1 needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_0F1 could not allocate memory for double");
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

            
                void Mgsl_sf_hyperg_0F1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_0F1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_0F1(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_1F1_int(const int m, const int n, double x);
            my_bool Mgsl_sf_hyperg_1F1_int_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_hyperg_1F1_int needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_1F1_int could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=INT_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_1F1_int_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_1F1_int(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_1F1_int(*((const int *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_1F1(double a, double b, double x);
            my_bool Mgsl_sf_hyperg_1F1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_hyperg_1F1 needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_1F1 could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_1F1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_1F1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_1F1(*((const double *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_U_int(const int m, const int n, const double x);
            my_bool Mgsl_sf_hyperg_U_int_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_hyperg_U_int needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_U_int could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=INT_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_U_int_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_U_int(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_U_int(*((const int *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_U(const double a, const double b, const double x);
            my_bool Mgsl_sf_hyperg_U_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_hyperg_U needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_U could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_U_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_U(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_U(*((const double *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_2F1(double a, double b, double c, double x);
            my_bool Mgsl_sf_hyperg_2F1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_hyperg_2F1 needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_2F1 could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_2F1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_2F1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_2F1(*((const double *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_2F1_conj(double aR, double aI, double c, double x);
            my_bool Mgsl_sf_hyperg_2F1_conj_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_hyperg_2F1_conj needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_2F1_conj could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_2F1_conj_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_2F1_conj(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_2F1_conj(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_2F1_renorm(double a, double b, double c, double x);
            my_bool Mgsl_sf_hyperg_2F1_renorm_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_hyperg_2F1_renorm needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_2F1_renorm could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_2F1_renorm_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_2F1_renorm(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_2F1_renorm(*((const double *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hyperg_2F1_conj_renorm(double aR, double aI, double c, double x);
            my_bool Mgsl_sf_hyperg_2F1_conj_renorm_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_hyperg_2F1_conj_renorm needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hyperg_2F1_conj_renorm could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=REAL_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_hyperg_2F1_conj_renorm_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hyperg_2F1_conj_renorm(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hyperg_2F1_conj_renorm(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                

                #endif /* HAVE_DLOPEN */
