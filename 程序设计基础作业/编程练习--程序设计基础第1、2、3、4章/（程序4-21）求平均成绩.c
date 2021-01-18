#include <stdio.h> //建议不定次数的循环用while或do...while做 
#include <math.h>
int main(void)
{
	double average,sum = 0,score;
	int i;
	for (i = 0;i <= 100;i++)
	{
		scanf("%lf",&score);
		if (score < 0) {
			break;
		}
		sum = sum + score;
	}
	average = sum / i;
	printf("%.2f\n",average);
	return 0;
}
