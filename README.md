# This is a basic project setup using autotools 
First, run `autoreconf --install`, this should generate the `configure` and the `test-driver` script .

Then, since you don't want clutter your project directory, we will build the project in a new directory called `build`. So just `mkdir build` and `cd build`.

Then run `../configure` to generate the makefiles based on your `Makefile.am` (note that there is only one makefile here, we are not doing it recursively). 
Now the makefile should be ready, so to compile the program just type `make`. Then you will see the `hello` binary.

You also want to run the tests, so just type `make check` (the main for catch2 takes some time to compile at first, just wait patiently). Then you should see that all test cases will pass. If there is a failed case you can see the log at `test-suit.log`.
