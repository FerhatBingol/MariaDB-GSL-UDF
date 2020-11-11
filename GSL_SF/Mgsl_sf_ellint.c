/* MariaDB UDF PACKAGE
	by	Ferhat Bingöl 
      ferhatbingol@ustunenerji.com

    USTUN Energy Engineering LLC 
    www.USTUNEnerji.com
    Protected with AGPL-3.0 License
*/

/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_ellint.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_ellint.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_ellint.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_ellint.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_ellint.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_Kcomp;
            CREATE function Mgsl_sf_ellint_Kcomp RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_Ecomp;
            CREATE function Mgsl_sf_ellint_Ecomp RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_Pcomp;
            CREATE function Mgsl_sf_ellint_Pcomp RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_Dcomp;
            CREATE function Mgsl_sf_ellint_Dcomp RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_F;
            CREATE function Mgsl_sf_ellint_F RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_E;
            CREATE function Mgsl_sf_ellint_E RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_P;
            CREATE function Mgsl_sf_ellint_P RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_D;
            CREATE function Mgsl_sf_ellint_D RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_RC;
            CREATE function Mgsl_sf_ellint_RC RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_RD;
            CREATE function Mgsl_sf_ellint_RD RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_RF;
            CREATE function Mgsl_sf_ellint_RF RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_ellint_RJ;
            CREATE function Mgsl_sf_ellint_RJ RETURNS REAL SONAME 'Mgsl_sf_ellint.so';            
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
#include "gsl/gsl_sf_ellint.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_Kcomp(double k, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_Kcomp_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_Kcomp_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_Kcomp		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_Ecomp(double k, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_Ecomp_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_Ecomp_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_Ecomp		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_Pcomp(double k, double n, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_Pcomp_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_Pcomp_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_Pcomp		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_Dcomp(double k, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_Dcomp_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_Dcomp_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_Dcomp		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_F(double phi, double k, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_F_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_F_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_F		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_E(double phi, double k, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_E_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_E_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_E		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_P(double phi, double k, double n, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_P_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_P_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_P		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_D(double phi, double k, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_D_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_D_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_D		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_RC(double x, double y, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_RC_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_RC_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_RC		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_RD(double x, double y, double z, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_RD_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_RD_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_RD		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_RF(double x, double y, double z, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_RF_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_RF_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_RF		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_ellint.h
            // SRC FUNCTION : double gsl_sf_ellint_RJ(double x, double y, double z, double p, gsl_mode_t mode);
            DLLEXP my_bool	Mgsl_sf_ellint_RJ_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_ellint_RJ_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_ellint_RJ		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_ellint_Kcomp(double k, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_Kcomp_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_ellint_Kcomp needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_Kcomp could not allocate memory for double");
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

            
                void Mgsl_sf_ellint_Kcomp_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_Kcomp(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_Kcomp(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_Ecomp(double k, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_Ecomp_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_ellint_Ecomp needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_Ecomp could not allocate memory for double");
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

            
                void Mgsl_sf_ellint_Ecomp_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_Ecomp(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_Ecomp(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_Pcomp(double k, double n, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_Pcomp_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_ellint_Pcomp needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_Pcomp could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_Pcomp_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_Pcomp(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_Pcomp(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const int *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_Dcomp(double k, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_Dcomp_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_ellint_Dcomp needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_Dcomp could not allocate memory for double");
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

            
                void Mgsl_sf_ellint_Dcomp_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_Dcomp(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_Dcomp(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_F(double phi, double k, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_F_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_ellint_F needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_F could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_F_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_F(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_F(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const int *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_E(double phi, double k, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_E_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_ellint_E needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_E could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_E_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_E(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_E(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const int *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_P(double phi, double k, double n, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_P_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_ellint_P needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_P could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_P_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_P(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_P(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]),*((const int *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_D(double phi, double k, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_D_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_ellint_D needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_D could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_D_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_D(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_D(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const int *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_RC(double x, double y, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_RC_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_ellint_RC needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_RC could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_RC_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_RC(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_RC(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const int *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_RD(double x, double y, double z, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_RD_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_ellint_RD needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_RD could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_RD_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_RD(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_RD(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]),*((const int *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_RF(double x, double y, double z, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_RF_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=4){
                    strcpy(message,"ERROR: gsl_sf_ellint_RF needs 4 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_RF could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=REAL_RESULT;

                        args->arg_type[1]=REAL_RESULT;

                        args->arg_type[2]=REAL_RESULT;

                        args->arg_type[3]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_RF_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_RF(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_RF(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]),*((const int *)args->args[3]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_ellint_RJ(double x, double y, double z, double p, gsl_mode_t mode);
            my_bool Mgsl_sf_ellint_RJ_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=5){
                    strcpy(message,"ERROR: gsl_sf_ellint_RJ needs 5 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_ellint_RJ could not allocate memory for double");
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

                        args->arg_type[4]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_ellint_RJ_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_ellint_RJ(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_ellint_RJ(*((const double *)args->args[0]),*((const double *)args->args[1]),*((const double *)args->args[2]),*((const double *)args->args[3]),*((const int *)args->args[4]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */
