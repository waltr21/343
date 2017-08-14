#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	printf("Howdy all!\n\n");
	printf("This program was provided with %d command-line arguments.\n\n", argc);
	printf("These arguments are:\n====================\n\n");
	for(int i=0; i<argc; i++){
		printf("\t%s\n", argv[i]);
	}
	
	return 0;
}
