#include <stdio.h>
#include <math.h>
int main(void)
{
	int origin [30],i,j = 2,k;
	double sum = 0,average [6];
	for (i = 0;i < 30;i++) {
		origin [i] = j;
		j += 2;
		sum = sum + origin [i];
		printf("%d ",origin [i]);
		}
	printf ("\n");
	for (k = 0;k < 6;k++) {
		average [k] = sum / 5.0;
		printf("%.2f ",average [k]);
	}
	return 0;
}
