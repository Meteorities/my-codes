#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 1; 
	double principal = 0,rate = 0,day = 0,interest = 0;
	for ( ;i != 0; ) {
		printf("Enter loan principal ( -1 to end ):\n");
		scanf("%lf",& principal); //�⼸�����һ��Ҫ�����棡����������Bug�� 
		if (principal > 0) {
			printf("Enter interest rate:\n");
			scanf("%lf",& rate);
			printf("Enter term of the loan in days:\n");
			scanf("%lf",& day);
			interest = principal * rate * day / 365;
			printf("The interest charge is $%.2f\n",interest);
		}
		
		if (principal < 0) {
			i = 0;
		}
	}
	return 0;
} 
