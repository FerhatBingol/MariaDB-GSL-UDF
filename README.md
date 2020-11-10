# MariaDB-UDF

This repo is for my MariaDB UDF wrappers based on different scientific libraries (mostly in C). Better documentation is coming soon. 

The first group is GSL_SF (GNU Scientific Library / Special Functions). Each special function group from GSL is wrapped with initial letter M. For example "gsl_sf_gamma" function becomes "Mgsl_sf_gamma" function in this UDF code. 
 
 Requirements  : mariadb-server >10.5, libmariadb-dev, gsl
 
 Compile              : Just explore the code and header information for to see how to compile, install and load!
  
 About GSL Functions : This is just a wrapper so it does not check the input parameters. Please, refer to the official GSL documentation https://www.gnu.org/software/gsl/doc/html/specfunc.html



