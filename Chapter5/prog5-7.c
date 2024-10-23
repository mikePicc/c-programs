#include <stdio.h>

int main (void) { 

	char c;
	
	printf("Enter a single character: \n");
	scanf("%c", &c);

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) 	printf("This is an alphabetical character.\n");
	else if ( c >= '0' && c <= '9') 			printf("This is a number.\n");
	else 	printf("this is a special character.\n");

	

	return 0;
}
