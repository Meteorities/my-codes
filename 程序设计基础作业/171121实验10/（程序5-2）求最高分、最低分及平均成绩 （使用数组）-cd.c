#include <stdio.h>
#include <math.h>
int main(void) //cd
{
	double grade [1000],max = 0,min = 0,sum = 0,average;
	int n,i;
	scanf("%d",& n);
	for(i = 0;i < n;i++) {
		scanf("%lf",& grade [i]);
		max = grade [0];
		min = grade [0];
	}
	for(i = 0;i < n;i++){
			if(max < grade [i]) {
				max = grade [i];	
			}
			if(min > grade [i]) {
				min = grade [i];
			}
			sum += grade[i]; 
		}
	average = sum / n;
	printf("%.2f\n%.2f\n%.2f\n",max,min,average);
	return 0;
}
