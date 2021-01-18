#include <stdio.h>
#include <math.h>
int main(void)
{
	int n = 0,i = 1,k = 1;
	double average = 0,grade = 0,passed = 0;
	scanf("%d",& n);
	for ( ;i <= n;i++){
	scanf("%lf",& grade);
	while (grade < 60) {
		printf("Failed: %.lf\n",grade);
		continue;
	}
	passed = passed + grade;
	k++;
	}
	average = passed / k;
	if (i > 0) {
		printf("Average of passed is: %.2f\n",average);
	}
	return 0;
}
