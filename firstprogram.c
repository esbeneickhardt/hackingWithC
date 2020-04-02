#include <stdio.h>				// Tells the compiler to include headers from a standard input/output library called stdio

int main()					// The main execution of a C program starts with main()
{
	int i;
	for(i=0; i<10; i++)			// Looping 10 times
	{
		printf("Hello World!\n");	// Writes a string to the output
	}
	return 0;				// Tells the OS that the program exited without errors
}

						// The program is compiled by running gcc firstprogram.c
						// The compiled program is run by writing ./a.out
