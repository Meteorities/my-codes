#include <stdio.h>
#include <math.h>
int main(void)
{
	double grade [1000],max,min,average = 0,sum = 0;
	int n,i;
	scanf("%d",& n);
	max = grade [0];
	min = grade [0];
	for (i = 0;i <= n;i++) {
		scanf("%lf",& grade [i]);
		if (grade [i] > max) {
			max = grade [i];
		}
		if (min > grade [i]) {
			min = grade [i];
		}
		sum += grade [i];
	}
	average = sum / n;
	printf("%.2f\n%.2f\n%.2f\n",max,min,average);
	return 0;
} 
