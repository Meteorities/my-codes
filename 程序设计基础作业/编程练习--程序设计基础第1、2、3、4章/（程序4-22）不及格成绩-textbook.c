#include <stdio.h>
int main(void)
{
	double grade = 0,passed = 0,average = 0;
	int i = 1,n = 1,N = 0;
	scanf("%d",& N);
	for ( ;i <= N;i++) {
		scanf("%d",& grade);
		if(grade < 60) {
			printf("Failed: %.f\n",grade);
			continue;
		}
	passed = passed + grade;
	n++;
	}
	average = passed / n;
	printf("Average of passed is: %.2f\n",average);
	return 0;
} 
