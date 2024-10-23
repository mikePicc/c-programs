#include <stdio.h>

int main (void) { 

	int numOfGrades, grade, gradeTotal = 0, failureCount = 0;
	float avg;

	printf("how many grades will you be entering? ");
	scanf("%i", &numOfGrades);

	for (int i = 1; i <= numOfGrades; ++i){
		printf("Enter grade #%i: ", i);
		scanf("%i", &grade);
		
		gradeTotal += grade;

		if (grade < 65)		++failureCount;

	}

	avg = (float) gradeTotal / numOfGrades;

	printf("\nGrade average = %.2f\n", avg);
	printf("Number of failures = %i\n", failureCount);


	return 0;
}
