#include <stdio.h> //���鲻��������ѭ����while��do...while�� 
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
