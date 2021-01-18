#include <stdio.h>
#include <math.h>
int main(void)
{
	int grade = 0,i = 0;
	double average = 0;
	for ( ;grade >= 0;i++) {
		printf("Enter grade, -1 to end:\n");
		scanf("%d",& grade);
		average = average + grade;
	}
	average = (average + 1) / (i - 1);
	printf("Class average is %.2f",average);
	return 0;
}
