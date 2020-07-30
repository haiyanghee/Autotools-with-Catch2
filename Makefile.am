dist_doc_DATA = README.md

AM_CXXFLAGS = -std=c++17 -Wall -Wextra  
#VPATH = $(srcdir) $(builddir)/include

#nobase_include_HEADERS = include/testBuild/Input/Input.hpp
headersdir = $(includedir)/testBuild
headers_HEADERS = 	tests/framework/catch2/catch.hpp\
					include/testBuild/Input/Input.hpp\
					include/testBuild/Poly/Poly.hpp

bin_PROGRAMS = hello
hello_SOURCES = src/main.cpp \
				src/Input/Input.cpp \
				src/Poly/Poly.cpp
hello_CXXFLAGS = -I$(top_srcdir)/include


testCompilerFlags = $(hello_CXXFLAGS) -I$(top_srcdir)/tests/framework/catch2
TESTS = $(check_PROGRAMS)
check_PROGRAMS = inputTest polyTest

inputTest_SOURCES = tests/main-test.cpp tests/Input/Input_test.cpp  src/Input/Input.cpp
inputTest_CXXFLAGS = $(testCompilerFlags)

polyTest_SOURCES = tests/main-test.cpp tests/Poly/Poly_test.cpp  src/Poly/Poly.cpp
polyTest_CXXFLAGS = $(testCompilerFlags)
