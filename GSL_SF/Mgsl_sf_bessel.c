/* MARIADB UDF: WRAPPER FOR /usr/include/gsl/gsl_sf_bessel.h
-------------------------------------------------------------------
COMPILE:
    gcc -o Mgsl_sf_bessel.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_bessel.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
    -------------------------------------------------------------------
INSTALL:
    sudo cp Mgsl_sf_bessel.so /usr/lib/mysql/plugin
    sudo chmod 777 /usr/lib/mysql/plugin/Mgsl_sf_bessel.so
    sudo service mariadb restart
------------------------------------------------------------------- 
LOAD:
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_J0;
            CREATE function Mgsl_sf_bessel_J0 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_J1;
            CREATE function Mgsl_sf_bessel_J1 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Jn;
            CREATE function Mgsl_sf_bessel_Jn RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Y0;
            CREATE function Mgsl_sf_bessel_Y0 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Y1;
            CREATE function Mgsl_sf_bessel_Y1 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Yn;
            CREATE function Mgsl_sf_bessel_Yn RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_I0;
            CREATE function Mgsl_sf_bessel_I0 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_I1;
            CREATE function Mgsl_sf_bessel_I1 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_In;
            CREATE function Mgsl_sf_bessel_In RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_I0_scaled;
            CREATE function Mgsl_sf_bessel_I0_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_I1_scaled;
            CREATE function Mgsl_sf_bessel_I1_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_In_scaled;
            CREATE function Mgsl_sf_bessel_In_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_K0;
            CREATE function Mgsl_sf_bessel_K0 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_K1;
            CREATE function Mgsl_sf_bessel_K1 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Kn;
            CREATE function Mgsl_sf_bessel_Kn RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_K0_scaled;
            CREATE function Mgsl_sf_bessel_K0_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_K1_scaled;
            CREATE function Mgsl_sf_bessel_K1_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Kn_scaled;
            CREATE function Mgsl_sf_bessel_Kn_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_j0;
            CREATE function Mgsl_sf_bessel_j0 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_j1;
            CREATE function Mgsl_sf_bessel_j1 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_j2;
            CREATE function Mgsl_sf_bessel_j2 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_jl;
            CREATE function Mgsl_sf_bessel_jl RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_y0;
            CREATE function Mgsl_sf_bessel_y0 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_y1;
            CREATE function Mgsl_sf_bessel_y1 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_y2;
            CREATE function Mgsl_sf_bessel_y2 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_yl;
            CREATE function Mgsl_sf_bessel_yl RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_i0_scaled;
            CREATE function Mgsl_sf_bessel_i0_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_i1_scaled;
            CREATE function Mgsl_sf_bessel_i1_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_i2_scaled;
            CREATE function Mgsl_sf_bessel_i2_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_il_scaled;
            CREATE function Mgsl_sf_bessel_il_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_k0_scaled;
            CREATE function Mgsl_sf_bessel_k0_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_k1_scaled;
            CREATE function Mgsl_sf_bessel_k1_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_k2_scaled;
            CREATE function Mgsl_sf_bessel_k2_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_kl_scaled;
            CREATE function Mgsl_sf_bessel_kl_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Jnu;
            CREATE function Mgsl_sf_bessel_Jnu RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Ynu;
            CREATE function Mgsl_sf_bessel_Ynu RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Inu_scaled;
            CREATE function Mgsl_sf_bessel_Inu_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Inu;
            CREATE function Mgsl_sf_bessel_Inu RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Knu_scaled;
            CREATE function Mgsl_sf_bessel_Knu_scaled RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_Knu;
            CREATE function Mgsl_sf_bessel_Knu RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_lnKnu;
            CREATE function Mgsl_sf_bessel_lnKnu RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_zero_J0;
            CREATE function Mgsl_sf_bessel_zero_J0 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_zero_J1;
            CREATE function Mgsl_sf_bessel_zero_J1 RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
            DROP FUNCTION IF EXISTS Mgsl_sf_bessel_zero_Jnu;
            CREATE function Mgsl_sf_bessel_zero_Jnu RETURNS REAL SONAME 'Mgsl_sf_bessel.so';            
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
#include "gsl/gsl_sf_bessel.h"
#ifdef HAVE_DLOPEN

#ifdef	__cplusplus
    extern "C" {
#endif

            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_J0(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_J0_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_J0_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_J0		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_J1(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_J1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_J1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_J1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Jn(const int n, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Jn_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Jn_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Jn		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Y0(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Y0_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Y0_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Y0		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Y1(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Y1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Y1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Y1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Yn(const int n,const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Yn_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Yn_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Yn		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_I0(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_I0_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_I0_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_I0		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_I1(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_I1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_I1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_I1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_In(const int n, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_In_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_In_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_In		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_I0_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_I0_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_I0_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_I0_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_I1_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_I1_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_I1_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_I1_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_In_scaled(const int n, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_In_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_In_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_In_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_K0(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_K0_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_K0_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_K0		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_K1(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_K1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_K1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_K1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Kn(const int n, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Kn_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Kn_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Kn		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_K0_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_K0_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_K0_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_K0_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_K1_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_K1_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_K1_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_K1_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Kn_scaled(const int n, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Kn_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Kn_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Kn_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_j0(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_j0_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_j0_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_j0		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_j1(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_j1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_j1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_j1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_j2(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_j2_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_j2_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_j2		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_jl(const int l, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_jl_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_jl_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_jl		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_y0(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_y0_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_y0_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_y0		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_y1(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_y1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_y1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_y1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_y2(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_y2_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_y2_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_y2		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_yl(const int l, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_yl_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_yl_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_yl		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_i0_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_i0_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_i0_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_i0_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_i1_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_i1_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_i1_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_i1_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_i2_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_i2_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_i2_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_i2_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_il_scaled(const int l, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_il_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_il_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_il_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_k0_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_k0_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_k0_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_k0_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_k1_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_k1_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_k1_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_k1_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_k2_scaled(const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_k2_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_k2_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_k2_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_kl_scaled(const int l, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_kl_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_kl_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_kl_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Jnu(const double nu, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Jnu_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Jnu_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Jnu		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Ynu(const double nu, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Ynu_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Ynu_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Ynu		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Inu_scaled(double nu, double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Inu_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Inu_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Inu_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Inu(double nu, double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Inu_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Inu_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Inu		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Knu_scaled(const double nu, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Knu_scaled_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Knu_scaled_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Knu_scaled		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_Knu(const double nu, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_Knu_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_Knu_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_Knu		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_lnKnu(const double nu, const double x);
            DLLEXP my_bool	Mgsl_sf_bessel_lnKnu_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_lnKnu_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_lnKnu		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_zero_J0(unsigned int s);
            DLLEXP my_bool	Mgsl_sf_bessel_zero_J0_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_zero_J0_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_zero_J0		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_zero_J1(unsigned int s);
            DLLEXP my_bool	Mgsl_sf_bessel_zero_J1_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_zero_J1_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_zero_J1		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
            // DLLEXP functions for 
            // SRC FILE     : http://git.savannah.gnu.org/cgit/gsl.git/tree/specfunc/gsl_sf_bessel.h
            // SRC FUNCTION : double gsl_sf_bessel_zero_Jnu(double nu, unsigned int s);
            DLLEXP my_bool	Mgsl_sf_bessel_zero_Jnu_init	(UDF_INIT *initid,	UDF_ARGS *args,					char *message	);
            DLLEXP void		Mgsl_sf_bessel_zero_Jnu_deinit(UDF_INIT *initid													);
            DLLEXP double	Mgsl_sf_bessel_zero_Jnu		(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error		);
            
#ifdef	__cplusplus
}
#endif

            // UDF functions for double gsl_sf_bessel_J0(const double x);
            my_bool Mgsl_sf_bessel_J0_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_J0 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_J0 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_J0_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_J0(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_J0(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_J1(const double x);
            my_bool Mgsl_sf_bessel_J1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_J1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_J1 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_J1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_J1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_J1(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Jn(const int n, const double x);
            my_bool Mgsl_sf_bessel_Jn_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Jn needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Jn could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Jn_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Jn(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Jn(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Y0(const double x);
            my_bool Mgsl_sf_bessel_Y0_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_Y0 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Y0 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Y0_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Y0(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Y0(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Y1(const double x);
            my_bool Mgsl_sf_bessel_Y1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_Y1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Y1 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Y1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Y1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Y1(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Yn(const int n,const double x);
            my_bool Mgsl_sf_bessel_Yn_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Yn needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Yn could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Yn_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Yn(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Yn(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_I0(const double x);
            my_bool Mgsl_sf_bessel_I0_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_I0 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_I0 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_I0_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_I0(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_I0(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_I1(const double x);
            my_bool Mgsl_sf_bessel_I1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_I1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_I1 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_I1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_I1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_I1(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_In(const int n, const double x);
            my_bool Mgsl_sf_bessel_In_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_In needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_In could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_In_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_In(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_In(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_I0_scaled(const double x);
            my_bool Mgsl_sf_bessel_I0_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_I0_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_I0_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_I0_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_I0_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_I0_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_I1_scaled(const double x);
            my_bool Mgsl_sf_bessel_I1_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_I1_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_I1_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_I1_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_I1_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_I1_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_In_scaled(const int n, const double x);
            my_bool Mgsl_sf_bessel_In_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_In_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_In_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_In_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_In_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_In_scaled(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_K0(const double x);
            my_bool Mgsl_sf_bessel_K0_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_K0 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_K0 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_K0_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_K0(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_K0(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_K1(const double x);
            my_bool Mgsl_sf_bessel_K1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_K1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_K1 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_K1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_K1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_K1(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Kn(const int n, const double x);
            my_bool Mgsl_sf_bessel_Kn_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Kn needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Kn could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Kn_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Kn(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Kn(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_K0_scaled(const double x);
            my_bool Mgsl_sf_bessel_K0_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_K0_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_K0_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_K0_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_K0_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_K0_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_K1_scaled(const double x);
            my_bool Mgsl_sf_bessel_K1_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_K1_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_K1_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_K1_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_K1_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_K1_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Kn_scaled(const int n, const double x);
            my_bool Mgsl_sf_bessel_Kn_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Kn_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Kn_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Kn_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Kn_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Kn_scaled(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_j0(const double x);
            my_bool Mgsl_sf_bessel_j0_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_j0 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_j0 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_j0_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_j0(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_j0(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_j1(const double x);
            my_bool Mgsl_sf_bessel_j1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_j1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_j1 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_j1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_j1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_j1(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_j2(const double x);
            my_bool Mgsl_sf_bessel_j2_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_j2 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_j2 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_j2_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_j2(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_j2(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_jl(const int l, const double x);
            my_bool Mgsl_sf_bessel_jl_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_jl needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_jl could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_jl_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_jl(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_jl(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_y0(const double x);
            my_bool Mgsl_sf_bessel_y0_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_y0 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_y0 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_y0_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_y0(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_y0(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_y1(const double x);
            my_bool Mgsl_sf_bessel_y1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_y1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_y1 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_y1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_y1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_y1(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_y2(const double x);
            my_bool Mgsl_sf_bessel_y2_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_y2 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_y2 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_y2_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_y2(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_y2(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_yl(const int l, const double x);
            my_bool Mgsl_sf_bessel_yl_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_yl needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_yl could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_yl_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_yl(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_yl(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_i0_scaled(const double x);
            my_bool Mgsl_sf_bessel_i0_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_i0_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_i0_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_i0_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_i0_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_i0_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_i1_scaled(const double x);
            my_bool Mgsl_sf_bessel_i1_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_i1_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_i1_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_i1_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_i1_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_i1_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_i2_scaled(const double x);
            my_bool Mgsl_sf_bessel_i2_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_i2_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_i2_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_i2_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_i2_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_i2_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_il_scaled(const int l, const double x);
            my_bool Mgsl_sf_bessel_il_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_il_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_il_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_il_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_il_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_il_scaled(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_k0_scaled(const double x);
            my_bool Mgsl_sf_bessel_k0_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_k0_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_k0_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_k0_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_k0_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_k0_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_k1_scaled(const double x);
            my_bool Mgsl_sf_bessel_k1_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_k1_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_k1_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_k1_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_k1_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_k1_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_k2_scaled(const double x);
            my_bool Mgsl_sf_bessel_k2_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_k2_scaled needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_k2_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_k2_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_k2_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_k2_scaled(*((const double *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_kl_scaled(const int l, const double x);
            my_bool Mgsl_sf_bessel_kl_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_kl_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_kl_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_kl_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_kl_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_kl_scaled(*((const int *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Jnu(const double nu, const double x);
            my_bool Mgsl_sf_bessel_Jnu_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Jnu needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Jnu could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Jnu_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Jnu(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Jnu(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Ynu(const double nu, const double x);
            my_bool Mgsl_sf_bessel_Ynu_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Ynu needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Ynu could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Ynu_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Ynu(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Ynu(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Inu_scaled(double nu, double x);
            my_bool Mgsl_sf_bessel_Inu_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Inu_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Inu_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Inu_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Inu_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Inu_scaled(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Inu(double nu, double x);
            my_bool Mgsl_sf_bessel_Inu_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Inu needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Inu could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Inu_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Inu(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Inu(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Knu_scaled(const double nu, const double x);
            my_bool Mgsl_sf_bessel_Knu_scaled_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Knu_scaled needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Knu_scaled could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Knu_scaled_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Knu_scaled(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Knu_scaled(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_Knu(const double nu, const double x);
            my_bool Mgsl_sf_bessel_Knu_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_Knu needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_Knu could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_Knu_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_Knu(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_Knu(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_lnKnu(const double nu, const double x);
            my_bool Mgsl_sf_bessel_lnKnu_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_lnKnu needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_lnKnu could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_lnKnu_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_lnKnu(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_lnKnu(*((const double *)args->args[0]),*((const double *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_zero_J0(unsigned int s);
            my_bool Mgsl_sf_bessel_zero_J0_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_zero_J0 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_zero_J0 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_zero_J0_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_zero_J0(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_zero_J0(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_zero_J1(unsigned int s);
            my_bool Mgsl_sf_bessel_zero_J1_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=1){
                    strcpy(message,"ERROR: gsl_sf_bessel_zero_J1 needs 1 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_zero_J1 could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_zero_J1_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_zero_J1(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_zero_J1(*((const int *)args->args[0]));
                    return *((double *)initid->ptr);
                }
                
            // UDF functions for double gsl_sf_bessel_zero_Jnu(double nu, unsigned int s);
            my_bool Mgsl_sf_bessel_zero_Jnu_init(UDF_INIT *initid,UDF_ARGS *args,char *message)
            {
                my_bool status;

                if(args->arg_count!=2){
                    strcpy(message,"ERROR: gsl_sf_bessel_zero_Jnu needs 2 argument(s)");
                    status = 1;
                } 
                else if(!(initid->ptr = malloc(sizeof(double))))
                {
                    initid->ptr = NULL;
                    strcpy(message,"ERROR: Mgsl_sf_bessel_zero_Jnu could not allocate memory for double");
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

            
                void Mgsl_sf_bessel_zero_Jnu_deinit(UDF_INIT *initid)
                {
                    if(initid->ptr!=NULL)	free(initid->ptr);
                }
                    
                double Mgsl_sf_bessel_zero_Jnu(UDF_INIT *initid,	UDF_ARGS *args,	char *is_null,	char *error)
                {
                    *((double *)initid->ptr)=gsl_sf_bessel_zero_Jnu(*((const double *)args->args[0]),*((const int *)args->args[1]));
                    return *((double *)initid->ptr);
                }
                #endif /* HAVE_DLOPEN */