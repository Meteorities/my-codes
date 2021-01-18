#include <stdio.h>
int main(void)
{
	double sum = 0.0;
	double add_num = 0.0;
	int days = 0;
	for (days = 1,add_num = 0.01;days <= 30;days++)
	{
		sum = sum + add_num;
		printf("Day %d:Need to hand in %.2f,Total hand in %.2f now\n",days,add_num,sum);
		add_num *= 2.00;
	}
	printf("Done.\n");
	return 0;
}
