// tricky tricky....gicen an input like 2155, add each individual num: 2+1+5+5=13

#include <stdio.h>

int main (void) { 


	int num, digit = 0, ans = 0;

	printf("Please enter a number you want to add up. ");
	scanf("%i", &num);

	while(num != 0){
		digit = num % 10;
		ans += digit;
		num = num / 10;
	
	}	
	printf("\n");
	printf("%i", ans);
	printf("\n");
	return 0;
}
