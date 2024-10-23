// This is a combined quetion, 8 & 9 for chapter 3
//the goal is to find the next largest even multiple for the following values 

#include <stdio.h>
#include <math.h>

int main (void) { 
	
	int 	i1 = 365, i2 = 12258, i3 = 996;
	
	int 	j1 = 7, j2 = 23, j3 = 4;

	int 	exi = 256, exj = 7;


	printf("using the example with %i and %i, that answer would be %i.\n", exi, exj, exi + exj - exi % exj);

	printf("using the first set with numbers %i and %i, we would get: %i.\n", i1, j1, i1+ j1 - i1 % j1);

	printf("using the second set with numbers %i and %i, we would get: %i.\n", i2, j2, i2+ j2 - i2 % j2);
        
        printf("using the third set with numbers %i and %i, we would get: %i.\n", i3, j3, i3 + j3 - i3 % j3);
        
        

	

	return 0;
}
