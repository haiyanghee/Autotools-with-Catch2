# This is a basic project setup using autotools 
First, run `autoreconf --install`, this should generate the `configure` and the `test-driver` script .

Then, since you don't want clutter your project directory, we will build the project in a new directory called `build`. So just `mkdir build` and `cd build`.

Then run `../configure` to generate the makefiles based on your `Makefile.am` (note that there is only one makefile here, we are not doing it recursively). 
Now the makefile should be ready, so to compile the program just type `make`. Then you will see the `hello` binary.

You also want to run the tests, so just type `make check` (the main for catch2 takes some time to compile at first, just wait patiently). Then you should see that all test cases will pass. If there is a failed case you can see the log at `test-suit.log`.

A good reference to learn this would be https://www.gnu.org/savannah-checkouts/gnu/automake/manual/automake.html .

## Generating compile_commands.json
I am using [language client neovim](https://github.com/autozimu/LanguageClient-neovim), and when I open some file, say `src/main.cpp`, the language client does not know where the project root directory is and how are the files are compiled. Writing it manually takes too long, and thankfully there is a program called [bear](https://github.com/rizsotto/Bear) that will generate the `compile_commands.json` based on your make command.

For example, if you type `bear make` it will produce the arguments for the files in `src`, and `bear make check` it will produce the arguments for the files in `tests`. You would want to merge these 2 together just for safety. 

Also, the `compile_commands.json` must be in the project root directory, not in the `build` directory, so make sure to copy it to the root directory.
