// Still doing triangular number table prints, but this time we're asking for user input using scanf()

#include <stdio.h>

int main(void){ 
	
	int 	n, num, triNum = 0;
	
	printf("What triangular number do you want to calculate? ");
	scanf("%i", &num);

	for (n = 1; n<= num; n++){
		triNum +=n;
	}

	printf("The triangular number for %i is: %i.\n", num, triNum);


	return 0;
} 
