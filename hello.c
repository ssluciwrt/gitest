// hello.c -- a simple greeting program

#include <stdio.h>

int main(int argc, char* argv[]) {
    if(argc == 1)
	printf("\nHello world!\n\n");
    else if(argc >= 2)
	printf("\nHello %s!\n\n", argv[1]);

    printf("Hey!Finished!\n");
    return 0;
} 
