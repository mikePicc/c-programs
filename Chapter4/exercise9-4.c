//remake of program 4.4 but with a while loop...acoording to exercise9

#include  <stdio.h>

int main (void) {

	int n = 1, triNum = 0, num;
	printf("What triangular number do you want? ");
	scanf("%i", &num);

	while (n <= num) {
		triNum += n;
		++n;

	}

	printf("Triangular number %i is %i\n", num, triNum);




	return 0;
}
