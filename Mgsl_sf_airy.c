/* MariaDB UDF PACKAGE
	by	Ferhat Bingöl 
      ferhatbingol@ustunenerji.com

    USTUN Energy Engineering LLC 
    www.USTUNEnerji.com
    Protected with AGPL-3.0 License
*/

/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_airy.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_airy.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_airy.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_airy.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_airy.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Ai;
            CREATE function Mgsl_sf_airy_Ai RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Bi;
            CREATE function Mgsl_sf_airy_Bi RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Ai_scaled;
            CREATE function Mgsl_sf_airy_Ai_scaled RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Bi_scaled;
            CREATE function Mgsl_sf_airy_Bi_scaled RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Ai_deriv;
            CREATE function Mgsl_sf_airy_Ai_deriv RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Bi_deriv;
            CREATE function Mgsl_sf_airy_Bi_deriv RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Ai_deriv_scaled;
            CREATE function Mgsl_sf_airy_Ai_deriv_scaled RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_Bi_deriv_scaled;
            CREATE function Mgsl_sf_airy_Bi_deriv_scaled RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_zero_Ai;
            CREATE function Mgsl_sf_airy_zero_Ai RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_zero_Bi;
            CREATE function Mgsl_sf_airy_zero_Bi RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_zero_Ai_deriv;
            CREATE function Mgsl_sf_airy_zero_Ai_deriv RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_airy_zero_Bi_deriv;
            CREATE function Mgsl_sf_airy_zero_Bi_deriv RETURNS REAL SONAME 'Mgsl_sf_airy.so';            
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
#include "gsl/gsl_sf_airy.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Ai(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Ai_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Ai_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Ai		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Bi(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Bi_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Bi_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Bi		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Ai_scaled(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Ai_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Ai_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Ai_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Bi_scaled(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Bi_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Bi_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Bi_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Ai_deriv(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Ai_deriv_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Ai_deriv_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Ai_deriv		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Bi_deriv(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Bi_deriv_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Bi_deriv_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Bi_deriv		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Ai_deriv_scaled(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Ai_deriv_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Ai_deriv_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Ai_deriv_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_Bi_deriv_scaled(const double x, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_airy_Bi_deriv_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_Bi_deriv_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_Bi_deriv_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_zero_Ai(unsigned int s);
            DLLEXP my_bool	Mgsl_sf_airy_zero_Ai_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_zero_Ai_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_zero_Ai		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_zero_Bi(unsigned int s);
            DLLEXP my_bool	Mgsl_sf_airy_zero_Bi_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_zero_Bi_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_zero_Bi		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_zero_Ai_deriv(unsigned int s);
            DLLEXP my_bool	Mgsl_sf_airy_zero_Ai_deriv_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_zero_Ai_deriv_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_zero_Ai_deriv		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_airy.h
            // SRC FUNCTION : double gsl_sf_airy_zero_Bi_deriv(unsigned int s);
            DLLEXP my_bool	Mgsl_sf_airy_zero_Bi_deriv_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_airy_zero_Bi_deriv_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_airy_zero_Bi_deriv		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_airy_Ai(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Ai_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Ai needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Ai could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Ai_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Ai(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Ai(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_Bi(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Bi_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Bi needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Bi could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Bi_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Bi(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Bi(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_Ai_scaled(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Ai_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Ai_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Ai_scaled could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Ai_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Ai_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Ai_scaled(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_Bi_scaled(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Bi_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Bi_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Bi_scaled could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Bi_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Bi_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Bi_scaled(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_Ai_deriv(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Ai_deriv_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Ai_deriv needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Ai_deriv could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Ai_deriv_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Ai_deriv(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Ai_deriv(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_Bi_deriv(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Bi_deriv_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Bi_deriv needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Bi_deriv could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Bi_deriv_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Bi_deriv(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Bi_deriv(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_Ai_deriv_scaled(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Ai_deriv_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Ai_deriv_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Ai_deriv_scaled could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Ai_deriv_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Ai_deriv_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Ai_deriv_scaled(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_Bi_deriv_scaled(const double x, gsl_mode_t mode);
            my_bool Mgsl_sf_airy_Bi_deriv_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_airy_Bi_deriv_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_Bi_deriv_scaled could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_airy_Bi_deriv_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_Bi_deriv_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_Bi_deriv_scaled(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_zero_Ai(unsigned int s);
            my_bool Mgsl_sf_airy_zero_Ai_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_airy_zero_Ai needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_zero_Ai could not allocate memory for double");
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

            
                void Mgsl_sf_airy_zero_Ai_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_zero_Ai(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_zero_Ai(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_zero_Bi(unsigned int s);
            my_bool Mgsl_sf_airy_zero_Bi_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_airy_zero_Bi needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_zero_Bi could not allocate memory for double");
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

            
                void Mgsl_sf_airy_zero_Bi_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_zero_Bi(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_zero_Bi(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_zero_Ai_deriv(unsigned int s);
            my_bool Mgsl_sf_airy_zero_Ai_deriv_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_airy_zero_Ai_deriv needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_zero_Ai_deriv could not allocate memory for double");
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

            
                void Mgsl_sf_airy_zero_Ai_deriv_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_zero_Ai_deriv(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_zero_Ai_deriv(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_airy_zero_Bi_deriv(unsigned int s);
            my_bool Mgsl_sf_airy_zero_Bi_deriv_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_airy_zero_Bi_deriv needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_airy_zero_Bi_deriv could not allocate memory for double");
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

            
                void Mgsl_sf_airy_zero_Bi_deriv_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_airy_zero_Bi_deriv(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_airy_zero_Bi_deriv(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */
