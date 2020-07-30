#I did not include lots of the checks here. You can run `autoscan` and it will generate configure.scan, where it tells you what things you need to check for.

#name, ver, email
AC_INIT([testBuild], [1.0], [bug-automake@gnu.org])
#makes automake output any warning and error, foreign means it is not follow GNU standards (doesn't include ChangeLog, AUTHORS, etc), subdir-objects is for non-recursive subdirectories (we are not doing recursive make here, but if you are you don't need subdir-objects)
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])
#language is c++, but you dont really need this line
AC_LANG(C++)
#finds the c++ compiler
AC_PROG_CXX
#should include this, config.h stores some macros 
AC_CONFIG_HEADERS([config.h])
#where the makefiles are, we only have one here
AC_CONFIG_FILES([
 Makefile
])
AC_OUTPUT
