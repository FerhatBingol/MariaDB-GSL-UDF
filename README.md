# MariaDB-GSL-UDF

This is just-the-beginning of my efforts to attach GNU Scientific Library to Maria database. 

I have started with the Special Functions which we need to use within SQL queries. Without this UDFs one has to download the data to the client and process with a basic scientific function (e.g. Eurler's Gamma function or beta function).


## How to use the code

You need to:
- Compile the code
- Copy the library file to MariaDB plugin directory 
- Activate the functions with an SQL execution

The code is for
- MariaDB > 10.5
- GSL > 2.5
- I did not test on Windows

### Compile, install and test
Below first line will prepare the Makefile and the other two will install it.  
```
$ cmake CMakeList.txt
$ make
$ make install
```

Before any further you need to check the plugin directory. Above code has just used mariadb-config for detecting the plugin directory and copy the compiled library to that directory. But if you have setup a binary version of MariaDB (instead of compling yourself) default plugin directory might be different. Therefore, first learn the plugin directory with:

```
$ mariadb-config --plugindir
```
which returns /usr/lib/x86_64-linux-gnu/libmariadb3/plugin on Ubuntu 20.04 with MariaDB 10.5.7. To set this plugin directory you need to find and edit the default my.cnf config file with

```
$ locate my.cnf  # return /etc/mysql/my.cnf
$ sudo nano /etc/mysql/my.cnf
```

and add this to the end of the config file

```
[mysqld]
plugin_dir=/usr/lib/x86_64-linux-gnu/libmariadb3/plugin
```

Now, save, exit and restart mariadb server

```
$ sudo service mariadb restart
```

Thereafter, you are ready to install the new functions via
```
$ mysql
mysql> source MariaDB-GSL-UDF.sql
```

### Usage of binary release
Move library to your plugin directory and run the SQL command above

