// this program showcases and example of nested for loops with the triangular number exercise we've been doing

#include <stdio.h>

int main(void){ 

	int n, num, triNum, counter;

	for (counter = 1; counter <= 5; counter++){ 
		printf("What triangular number do you want to calculate? ");
		scanf("%i", &num);

		triNum = 0;

		for (n = 1; n <= num; n++){ 

			triNum += n;
		}

		printf("The triangular number of %i is: %i.\n", num, triNum);


	}





	printf("------------------------------------\n");
	printf("My own implementation...probably won't see it thru the terminal but in the code it'll make all the difference.\n");




	for (int counter = 1, triNum, num; counter <= 5; counter++){ 


		printf("For what number do you want to the triangular number of?");
		scanf("%i", &num);
		triNum = 0;

		for( int n = 1; n <= num; n++){ 
			triNum += n;
		}

		printf("The triangular number of %i is %i\n", num, triNum);

	}

	return 0;
}
