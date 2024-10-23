#include <stdio.h>

int main (void) {

	float num1, num2;
	char operator;

	printf("\n");
	printf("Type in your expression.\n");
	scanf("%f %c %f", &num1, &operator, &num2);

	switch (operator) {
	
		case '+':
			printf("%.2f \n", num1 + num2);
			break;
		case '-':
			printf("%.2f\n", num1 - num2);
			break;
		case '*':
			printf("%.2f\n", num1 * num2);
			break;

		case '/':
			if (num2 == 0) 		printf("Divide by zero error.\n");
			else			printf("%.2f\n", num1 / num2);
			break;
		default:
			printf("Unknown operator.\n");
			break;

	}



	printf("\n");

	return 0;
}
