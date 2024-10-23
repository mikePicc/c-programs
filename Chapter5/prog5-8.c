#include <stdio.h>


int main (void) {

	float num1, num2;
	char operator;
		
	printf("\n");
	
	printf("Type in your expression.	");
	scanf("%f %c %f" , &num1, &operator, &num2);

	if (operator == '-') 		printf("%.2f", num1 - num2);
	else if (operator == '+') 	printf("%.2f", num1 + num2);
	else if (operator == '*')	printf("%.2f", num1 * num2);
	else if (operator == '/') 
		{
		if (num2 == 0) 		printf("Division by zero error.\n");
		else 			printf("%.2f", num1/ num2);
		}


	else 				printf("unknown operator.\n");
	
	
	printf("\n");
	

	return 0;
}
