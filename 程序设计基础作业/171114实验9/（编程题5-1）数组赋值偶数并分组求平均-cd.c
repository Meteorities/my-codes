#include<stdio.h> 
int main(void)
{
	int origin [30],i,j,sum = 0;
	double average [6];
	for(i = 0;i < 30;i++) {
		origin [i] = 2 * (i + 1);
		printf("%d ",origin [i]);
	}
	printf("\n");
	for(i = 0;i < 6;i++) {
		for(j = 0;j < 5;j++) {
			sum += origin [5 * i + j];
			average [i] = sum / 5.0;	
			if (i % 4 == 0) {
				sum = 0;
			}
		}
	}
	for(i=0;i<6;i++) {
		printf("%.2f ",average [i]);
	}
	return 0;
}

