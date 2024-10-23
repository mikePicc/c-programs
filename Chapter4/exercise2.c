// anpther triangular number question...can use any looping system


#include <stdio.h>

int main (void){

	int	triNum = 0;
	
	printf("TRIANGULAR NUMBER CHART BY FACTOR OF 5's\n\n");
	printf("n	triangular Number\n");
	printf("--	-----------------\n");

	for (int i = 5; i <= 50; i += 5){
		
		triNum = i * (i + 1) / 2;
		printf("%i	%i\n", i, triNum);
	}

	return 0;
}
