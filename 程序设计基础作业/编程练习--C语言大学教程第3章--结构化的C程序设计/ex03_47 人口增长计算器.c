#include <stdio.h>
#include <math.h>
int main(void)
{
	int in,out = 1,i;
	double rate;
	printf("Please input the current population:\n");
	scanf("%d",& in);
	printf("Please input the rate of population growth( %% ):\n"); //注意%%！想输出%不报错看此。 
	scanf("%lf",& rate);
	rate = (rate / 100) + 1;
	out = in;
	for (i = 1;i <= 5;i++) {
		out = out * rate;
	}
	printf("The population after 5 years is %d thousands\n",out / 1000);
	return 0;
} 
