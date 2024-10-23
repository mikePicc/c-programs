#include <stdio.h>

int main (void) {

	int year, rem_4, rem_100, rem_400;

	printf("Enter a year to see if it is a leap year: ");
	scanf("%i", &year);

	rem_4 = year % 4;
	rem_100 = year % 100;
	rem_400 = year % 400;

	if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0) {
		printf("Yes, this is a leap year!\n");
	}

	else printf("No, this is not a leap year.\n");
	

	return 0;
}
