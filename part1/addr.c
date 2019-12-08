/**
 * Program that masks page number and offset from an
 * unsigned 32-bit address.
**/

#include <stdio.h>
#include <unistd.h>

/* page size in power of 2 */ 
#define PAGE_SIZE 12 
/* The size of a page is 4 KB (12 bits)
 *
 * A memory reference appears as:
 *
 * |------------|-----|
 *  31	    12 11     0
*/ 


int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr,"Usage: ./a.out <virtual address>\n");
		return -1;
	}

	int page_num, offset;
	unsigned int reference;

	reference = (unsigned int)atoi(argv[1]);
	printf("The address %d contains:\n",reference);

	/* FILL IN YOUR CODE HERE */

	printf("page number = %d\n",page_num);
	printf("offset = %d\n",offset);

	return 0;
}
