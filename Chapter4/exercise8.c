// modified version of program 4-5. this allows for user input to calculate triangular numbers 

#include <stdio.h>

int main (void) {

	int num, triNum, numOfLoops;

	printf("How many triangular numbers do you want to calculate?");
	scanf("%i", &numOfLoops);
	printf("\n");

	
	for (int counter = 1; counter <= numOfLoops; counter++) { 
		printf("What triangular number do you want? ");
		scanf("%i", &num);

		triNum = 0;
		
		for(int n = 1; n <= num; n++){ 
				
			triNum += n;	
			
		}		

		printf("Triangular number of %i is %i\n\n", num, triNum);
	
	}


	return 0;
}
