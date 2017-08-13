// When compiling an executable, the compiler needs
// will pull in the *.h files and underlying code
// everytime it is asked to with an #include.
// But, we may wish to use the library in multiple
// different files.  We don't want the code to be
// included in the final executable multiple times,
// as that would be redundant and lead to bloat.
// Solution?  Include guards!

// Here we are saying:
// If the name __H_MY_LIBRARY__ has not been defined
// already, then define it by loading in this code.
// Otherwise, do nothing.
#ifndef			__H_MY_LIBRARY__
#define			__H_MY_LIBRARY__

// As this is an *.h file, this is an interface.  No
// code is provided for how the function should work.
void handyFunction(int num);

#endif
