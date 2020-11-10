/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_gamma.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_gamma.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_gamma.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_gamma.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_gamma.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_lngamma;
            CREATE function Mgsl_sf_lngamma RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_gamma;
            CREATE function Mgsl_sf_gamma RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_gammastar;
            CREATE function Mgsl_sf_gammastar RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_gammainv;
            CREATE function Mgsl_sf_gammainv RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_taylorcoeff;
            CREATE function Mgsl_sf_taylorcoeff RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_fact;
            CREATE function Mgsl_sf_fact RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_doublefact;
            CREATE function Mgsl_sf_doublefact RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_lnfact;
            CREATE function Mgsl_sf_lnfact RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_lndoublefact;
            CREATE function Mgsl_sf_lndoublefact RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_lnchoose;
            CREATE function Mgsl_sf_lnchoose RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_choose;
            CREATE function Mgsl_sf_choose RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_lnpoch;
            CREATE function Mgsl_sf_lnpoch RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_poch;
            CREATE function Mgsl_sf_poch RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_pochrel;
            CREATE function Mgsl_sf_pochrel RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_gamma_inc_Q;
            CREATE function Mgsl_sf_gamma_inc_Q RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_gamma_inc_P;
            CREATE function Mgsl_sf_gamma_inc_P RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_gamma_inc;
            CREATE function Mgsl_sf_gamma_inc RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_lnbeta;
            CREATE function Mgsl_sf_lnbeta RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_beta;
            CREATE function Mgsl_sf_beta RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_beta_inc;
            CREATE function Mgsl_sf_beta_inc RETURNS REAL SONAME 'Mgsl_sf_gamma.so';            
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
#include "gsl/gsl_sf_gamma.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_lngamma(const double x);
            DLLEXP my_bool	Mgsl_sf_lngamma_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_lngamma_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_lngamma		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_gamma(const double x);
            DLLEXP my_bool	Mgsl_sf_gamma_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_gamma_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_gamma		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_gammastar(const double x);
            DLLEXP my_bool	Mgsl_sf_gammastar_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_gammastar_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_gammastar		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_gammainv(const double x);
            DLLEXP my_bool	Mgsl_sf_gammainv_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_gammainv_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_gammainv		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_taylorcoeff(const int n, const double x);
            DLLEXP my_bool	Mgsl_sf_taylorcoeff_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_taylorcoeff_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_taylorcoeff		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_fact(const unsigned int n);
            DLLEXP my_bool	Mgsl_sf_fact_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_fact_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_fact		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_doublefact(const unsigned int n);
            DLLEXP my_bool	Mgsl_sf_doublefact_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_doublefact_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_doublefact		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_lnfact(const unsigned int n);
            DLLEXP my_bool	Mgsl_sf_lnfact_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_lnfact_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_lnfact		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_lndoublefact(const unsigned int n);
            DLLEXP my_bool	Mgsl_sf_lndoublefact_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_lndoublefact_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_lndoublefact		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_lnchoose(unsigned int n, unsigned int m);
            DLLEXP my_bool	Mgsl_sf_lnchoose_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_lnchoose_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_lnchoose		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_choose(unsigned int n, unsigned int m);
            DLLEXP my_bool	Mgsl_sf_choose_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_choose_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_choose		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_lnpoch(const double a, const double x);
            DLLEXP my_bool	Mgsl_sf_lnpoch_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_lnpoch_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_lnpoch		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_poch(const double a, const double x);
            DLLEXP my_bool	Mgsl_sf_poch_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_poch_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_poch		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_pochrel(const double a, const double x);
            DLLEXP my_bool	Mgsl_sf_pochrel_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_pochrel_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_pochrel		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_gamma_inc_Q(const double a, const double x);
            DLLEXP my_bool	Mgsl_sf_gamma_inc_Q_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_gamma_inc_Q_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_gamma_inc_Q		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_gamma_inc_P(const double a, const double x);
            DLLEXP my_bool	Mgsl_sf_gamma_inc_P_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_gamma_inc_P_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_gamma_inc_P		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_gamma_inc(const double a, const double x);
            DLLEXP my_bool	Mgsl_sf_gamma_inc_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_gamma_inc_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_gamma_inc		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_lnbeta(const double a, const double b);
            DLLEXP my_bool	Mgsl_sf_lnbeta_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_lnbeta_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_lnbeta		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_beta(const double a, const double b);
            DLLEXP my_bool	Mgsl_sf_beta_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_beta_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_beta		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_gamma.h
            // SRC FUNCTION : double gsl_sf_beta_inc(const double a, const double b, const double x);
            DLLEXP my_bool	Mgsl_sf_beta_inc_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_beta_inc_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_beta_inc		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_lngamma(const double x);
            my_bool Mgsl_sf_lngamma_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_lngamma needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_lngamma could not allocate memory for double");
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

            
                void Mgsl_sf_lngamma_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_lngamma(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_lngamma(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_gamma(const double x);
            my_bool Mgsl_sf_gamma_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_gamma needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_gamma could not allocate memory for double");
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

            
                void Mgsl_sf_gamma_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_gamma(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_gamma(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_gammastar(const double x);
            my_bool Mgsl_sf_gammastar_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_gammastar needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_gammastar could not allocate memory for double");
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

            
                void Mgsl_sf_gammastar_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_gammastar(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_gammastar(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_gammainv(const double x);
            my_bool Mgsl_sf_gammainv_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_gammainv needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_gammainv could not allocate memory for double");
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

            
                void Mgsl_sf_gammainv_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_gammainv(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_gammainv(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_taylorcoeff(const int n, const double x);
            my_bool Mgsl_sf_taylorcoeff_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_taylorcoeff needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_taylorcoeff could not allocate memory for double");
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

            
                void Mgsl_sf_taylorcoeff_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_taylorcoeff(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_taylorcoeff(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_fact(const unsigned int n);
            my_bool Mgsl_sf_fact_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_fact needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_fact could not allocate memory for double");
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

            
                void Mgsl_sf_fact_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_fact(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_fact(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_doublefact(const unsigned int n);
            my_bool Mgsl_sf_doublefact_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_doublefact needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_doublefact could not allocate memory for double");
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

            
                void Mgsl_sf_doublefact_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_doublefact(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_doublefact(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_lnfact(const unsigned int n);
            my_bool Mgsl_sf_lnfact_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_lnfact needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_lnfact could not allocate memory for double");
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

            
                void Mgsl_sf_lnfact_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_lnfact(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_lnfact(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_lndoublefact(const unsigned int n);
            my_bool Mgsl_sf_lndoublefact_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_lndoublefact needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_lndoublefact could not allocate memory for double");
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

            
                void Mgsl_sf_lndoublefact_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_lndoublefact(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_lndoublefact(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_lnchoose(unsigned int n, unsigned int m);
            my_bool Mgsl_sf_lnchoose_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_lnchoose needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_lnchoose could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_lnchoose_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_lnchoose(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_lnchoose(*((const int *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_choose(unsigned int n, unsigned int m);
            my_bool Mgsl_sf_choose_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_choose needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_choose could not allocate memory for double");
                    status = 1;
                } 
                else 
                {
                    initid->maybe_null= 1;
                    initid->decimals= 5;                    
                        args->arg_type[0]=INT_RESULT;

                        args->arg_type[1]=INT_RESULT;

                    *((double *)initid->ptr) = -999.9;
                    status = 0;
                }
                return status;
            }

            
                void Mgsl_sf_choose_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_choose(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_choose(*((const int *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_lnpoch(const double a, const double x);
            my_bool Mgsl_sf_lnpoch_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_lnpoch needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_lnpoch could not allocate memory for double");
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

            
                void Mgsl_sf_lnpoch_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_lnpoch(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_lnpoch(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_poch(const double a, const double x);
            my_bool Mgsl_sf_poch_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_poch needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_poch could not allocate memory for double");
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

            
                void Mgsl_sf_poch_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_poch(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_poch(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_pochrel(const double a, const double x);
            my_bool Mgsl_sf_pochrel_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_pochrel needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_pochrel could not allocate memory for double");
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

            
                void Mgsl_sf_pochrel_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_pochrel(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_pochrel(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_gamma_inc_Q(const double a, const double x);
            my_bool Mgsl_sf_gamma_inc_Q_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_gamma_inc_Q needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_gamma_inc_Q could not allocate memory for double");
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

            
                void Mgsl_sf_gamma_inc_Q_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_gamma_inc_Q(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_gamma_inc_Q(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_gamma_inc_P(const double a, const double x);
            my_bool Mgsl_sf_gamma_inc_P_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_gamma_inc_P needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_gamma_inc_P could not allocate memory for double");
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

            
                void Mgsl_sf_gamma_inc_P_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_gamma_inc_P(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_gamma_inc_P(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_gamma_inc(const double a, const double x);
            my_bool Mgsl_sf_gamma_inc_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_gamma_inc needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_gamma_inc could not allocate memory for double");
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

            
                void Mgsl_sf_gamma_inc_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_gamma_inc(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_gamma_inc(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_lnbeta(const double a, const double b);
            my_bool Mgsl_sf_lnbeta_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_lnbeta needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_lnbeta could not allocate memory for double");
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

            
                void Mgsl_sf_lnbeta_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_lnbeta(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_lnbeta(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_beta(const double a, const double b);
            my_bool Mgsl_sf_beta_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_beta needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_beta could not allocate memory for double");
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

            
                void Mgsl_sf_beta_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_beta(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_beta(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_beta_inc(const double a, const double b, const double x);
            my_bool Mgsl_sf_beta_inc_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=3){
                    strcpy(message,"ERROR: gsl_sf_beta_inc needs 3 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_beta_inc could not allocate memory for double");
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

            
                void Mgsl_sf_beta_inc_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_beta_inc(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_beta_inc(*((const double *)args->args[0]),*((const int *)args->args[1]),*((const double *)args->args[2]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */