# Scientific MariaDB
This repo is for my MariaDB UDF wrappers based on different scientific libraries (mostly in C). Better documentation is coming soon. 

2020-11-10: The first added group is GSL_SF (GNU Scientific Library / Special Functions). Each special function group from GSL is wrapped in exactly the same symbols of each group. The function names are altered with a initial "M". For example "gsl_sf_gamma" function becomes "Mgsl_sf_gamma" function in this UDF code. 
 
## Requirements: 
mariadb-server >10.5, 
libmariadb-dev, 
gsl
 
## Usage: 
For now, just explore the code and header information for to see how to compile, install and load! But basically what is expected to use is (with examples):
### COMPILE:
    gcc -o Mgsl_sf_XXXX.so -DHAVE_DLOPEN -Wall -shared -lstdc++  Mgsl_sf_XXXX.c  -I/usr/include/mariadb -I/usr/include -I. -fPIC -lgsl
### INSTALL:
    sudo ln -s Mgsl_sf_XXXX.so /usr/lib/mysql/plugin/Mgsl_sf_XXXX.so
    sudo service mariadb restart
### LOAD:
    DROP FUNCTION IF EXISTS Mgsl_sf_XXXX;
    CREATE function Mgsl_sf_XXXX RETURNS REAL SONAME 'Mgsl_sf_XXXX.so';  
### USE:
    SELECT Mgsl_sf_XXXX(column);


  
## About GSL Functions : 
My code is just wrappers so it does not check the input parameters. Please, refer to the official GSL documentation https://www.gnu.org/software/gsl/doc/html/specfunc.html before you use the functions.



