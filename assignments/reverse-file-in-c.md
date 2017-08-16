# Reverse a file

For this project you will create a utility that will take as its parameters two filenames. The two filenames will be an input file and an output file. The usage from the command line will look like this:

```C
./reverse INPUT_FILENAME OUTPUT_FILENAME
```

When the program completes, the input file will have all of its text written in reverse to the output file. The following criteria should help you in creating this utility:

You will need a ```file_utils.h``` file with your function signatures, include guards, etc. It will include two functions:

```C
int read_file( char* filename, char **buffer );
int write_file( char* filename, char *buffer, int size);
```

**DO NOT CHANGE THESE FUNCTION SIGNATURES IN ANY WAY!**

You will need a ```file_utils.c``` file with you code implemented.

You will need a ```reverse.c``` file with code that accepts command arguments, includes a main function, and calls the functions from the included files.
C doesn’t have exceptions so you must create exception handling on your own. You must perform checks to make sure that memory allocation calls complete correctly and that file read/write operations complete correctly.
Use ```fprintf( stderr, "ERROR MESSAGE" );``` to print error messages. This will send them to the error stream instead of the standard output stream.

## Hints!

- Remember that you import \*.h files only (never import a \*.c file).

- Do not pass \*.h files to the compiler; they will be included if you use the ```#include``` statement in your \*.c files.

- Remember… C passes by value only. If you want to pass a pointer to a function and have that function change where the pointer points you will instead need to pass a pointer to a pointer and have the function modify the data in the pointer (the pointer to which the pointer points!) This is essential if you want to perform a malloc inside of a function and have a reference to that memory persist after the function exits.

- You can find out the size of a file with the following code (on EOS - this is the Linux method.  If you use another OS you must find another way.):

  ```C
  struct stat st;
  stat(filename, &st);
  int size = st.st_size;
  ```

  **NOTE!** You will need to ```#include <sys/stat.h>```.

## Grading

Rubric:

| Criteria | 5 Points | 3 Points | 0 Points |
|----------|----------|----------|----------|
| Compilation | Compiles with no errors or warnings | Compiles but with warnings | Doesn't compile |
| Style Guide | Perfectly adheres to style guide | Minor style guide mistakes | Fails to adhere to style guide |
| Follows Project Specifications | No requirements omitted | 1 - 2 requirements omitted | More than 2 requirements omitted |
| On time | Submitted before due date and time | Submitted up to 1 day late | Submitted more than 1 day late |

## Submission Process and Deadline

This assignment is due on Friday, February 3 at midnight. Submit as follows:

>Upload to Blackboard.

If you have questions about this process, see me immediately.
