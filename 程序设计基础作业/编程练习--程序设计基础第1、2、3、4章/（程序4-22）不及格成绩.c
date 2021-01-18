#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,count = 0;
	double grade,average = 0.0,sum = 0.0;
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		scanf("%lf",& grade);
		if (grade < 60) {
			printf("Failed: %d\n",(int)grade);
		}
		if (grade >= 60) {
			sum += grade;
			count++;
		}
	}
	if (sum != 0) {
		average = sum / count;
		printf("Average of passed is: %.2f",average);
	}
	return 0;
}
