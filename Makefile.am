# just a readme
dist_doc_DATA = README.md

# global compiler flags (will be applied everytime when you compile things)
AM_CXXFLAGS = -std=c++17 -Wall -Wextra  

# our header files are in /include/testBuild, and we want to add them
# the $(includedir)/testBuild is used when you want to `sudo make install` the project, it will copy the header files to /usr/local/include/testBuild  (/usr/local/ is the default location)
headersdir = $(includedir)/testBuild
#when use the variable `headersdir`, just get rid of the "dir", so it would be just `headers`
#this way when we create "build" directory and build the project there, VPATH / parallel building will find the headers
headers_HEADERS = 	tests/framework/catch2/catch.hpp\
					include/testBuild/Input/Input.hpp\
					include/testBuild/Poly/Poly.hpp

#the program/build target is called hello
bin_PROGRAMS = hello
#note that the name is "hello" + "_SOURCES"
#put the source files needed for the main
hello_SOURCES = src/main.cpp \
				src/Input/Input.cpp \
				src/Poly/Poly.cpp
# compile flags for this build target
hello_CXXFLAGS = -I$(top_srcdir)/include

# compiler flags for testing
testCompilerFlags = $(hello_CXXFLAGS) -I$(top_srcdir)/tests/framework/catch2
# TESTS macro is used for test suit
TESTS = $(check_PROGRAMS)
# we have 2 tests, named "inputTest" and "polyTest"
check_PROGRAMS = inputTest polyTest

# input the required source files for the test case
# note that for catch, the main-test should always be included, and you want to include what file in src that you are testing
# for example, we are testing "src/Input/Input.cpp", and in the test we need to input its header file, and thus we need to include the cpp file as a source. Otherwise the linker will complain
inputTest_SOURCES = tests/main-test.cpp tests/Input/Input_test.cpp  src/Input/Input.cpp
inputTest_CXXFLAGS = $(testCompilerFlags)

polyTest_SOURCES = tests/main-test.cpp tests/Poly/Poly_test.cpp  src/Poly/Poly.cpp
polyTest_CXXFLAGS = $(testCompilerFlags)
