/*
 * my_prog.c
 * Ira Woodring
 * 
 * A trivial example of how to write a basic C program,
 * with the use of external libraries.
 *
 */

// The # symbol is a compiler directive.  These are not
// lines of code really, but instructions for the compiler.
// This one says we are using the standard I/O library, so
// the compiler knows we are using functions like printf
// correctly.
// Notice we are using <> around the library name as this
// is a system library.
#include <stdio.h>

// This is a library we created, of code we may wish to use
// in multiple projects.
#include "library.h"

// This is the program's entry point
int main(int argc, char** argv){
	printf("Howdy world!\n");
	handyFunction(42);
}
