#include <stdio.h>
int main(void)
{
	int grade = 0;
	printf("Enter grade:\n");
	scanf("%d", &grade);
	if (grade >= 60) {
		printf("Passed\n");
	}
	else if (grade < 60) {
		printf("Failed\n");
	}
	return 0; 
}
