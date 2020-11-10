/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_zeta.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_zeta.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_zeta.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_zeta.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_zeta.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_zeta_int;
            CREATE function Mgsl_sf_zeta_int RETURNS REAL SONAME 'Mgsl_sf_zeta.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_zeta;
            CREATE function Mgsl_sf_zeta RETURNS REAL SONAME 'Mgsl_sf_zeta.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_zetam1;
            CREATE function Mgsl_sf_zetam1 RETURNS REAL SONAME 'Mgsl_sf_zeta.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_zetam1_int;
            CREATE function Mgsl_sf_zetam1_int RETURNS REAL SONAME 'Mgsl_sf_zeta.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_hzeta;
            CREATE function Mgsl_sf_hzeta RETURNS REAL SONAME 'Mgsl_sf_zeta.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_eta_int;
            CREATE function Mgsl_sf_eta_int RETURNS REAL SONAME 'Mgsl_sf_zeta.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_eta;
            CREATE function Mgsl_sf_eta RETURNS REAL SONAME 'Mgsl_sf_zeta.so';            
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
#include "gsl/gsl_sf_zeta.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_zeta.h
            // SRC FUNCTION : double gsl_sf_zeta_int(const int n);
            DLLEXP my_bool	Mgsl_sf_zeta_int_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_zeta_int_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_zeta_int		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_zeta.h
            // SRC FUNCTION : double gsl_sf_zeta(const double s);
            DLLEXP my_bool	Mgsl_sf_zeta_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_zeta_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_zeta		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_zeta.h
            // SRC FUNCTION : double gsl_sf_zetam1(const double s);
            DLLEXP my_bool	Mgsl_sf_zetam1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_zetam1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_zetam1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_zeta.h
            // SRC FUNCTION : double gsl_sf_zetam1_int(const int s);
            DLLEXP my_bool	Mgsl_sf_zetam1_int_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_zetam1_int_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_zetam1_int		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_zeta.h
            // SRC FUNCTION : double gsl_sf_hzeta(const double s, const double q);
            DLLEXP my_bool	Mgsl_sf_hzeta_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_hzeta_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_hzeta		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_zeta.h
            // SRC FUNCTION : double gsl_sf_eta_int(const int n);
            DLLEXP my_bool	Mgsl_sf_eta_int_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_eta_int_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_eta_int		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_zeta.h
            // SRC FUNCTION : double gsl_sf_eta(const double s);
            DLLEXP my_bool	Mgsl_sf_eta_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_eta_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_eta		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_zeta_int(const int n);
            my_bool Mgsl_sf_zeta_int_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_zeta_int needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_zeta_int could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_zeta_int_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_zeta_int(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_zeta_int(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_zeta(const double s);
            my_bool Mgsl_sf_zeta_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_zeta needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_zeta could not allocate memory for double");
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

            
                void Mgsl_sf_zeta_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_zeta(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_zeta(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_zetam1(const double s);
            my_bool Mgsl_sf_zetam1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_zetam1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_zetam1 could not allocate memory for double");
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

            
                void Mgsl_sf_zetam1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_zetam1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_zetam1(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_zetam1_int(const int s);
            my_bool Mgsl_sf_zetam1_int_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_zetam1_int needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_zetam1_int could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_zetam1_int_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_zetam1_int(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_zetam1_int(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_hzeta(const double s, const double q);
            my_bool Mgsl_sf_hzeta_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_hzeta needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_hzeta could not allocate memory for double");
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

            
                void Mgsl_sf_hzeta_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_hzeta(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_hzeta(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_eta_int(const int n);
            my_bool Mgsl_sf_eta_int_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_eta_int needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_eta_int could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_eta_int_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_eta_int(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_eta_int(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_eta(const double s);
            my_bool Mgsl_sf_eta_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_eta needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_eta could not allocate memory for double");
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

            
                void Mgsl_sf_eta_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_eta(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_eta(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */