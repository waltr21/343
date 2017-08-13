// In the implementation file, we must #include the
// interface file as well.
#include "library.h"

// Even though we source stdio.h into our prog.c,
// we still MUST include it in this file as well.
// Remember!  Each file is compiled separately.
#include <stdio.h>

void handyFunction(int num){
	for(int i=0; i<num; i++){
		printf("=");
	}
	printf("\n\n");
}
