#include <stdio.h>
double calculateAverage (int a[ ], int n)
{
	double sum = 0.0,average = 0.0;
	int j;
	for (j = 0;j < n;j++) {
		sum += a [j];
	}
	average = sum / n;
	return average;
}
int main(void)
{
	double calculateAverage (int a[ ], int n);
	int grade [100],n,i;
	double average = 0.0;
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		scanf("%d",& grade [i]);
	}
	average = calculateAverage (grade,n);
	printf("%.2f\n",average);
	return 0;
} 
