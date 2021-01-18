#include <stdio.h>
int main(void)
{
	long int f1 = 1,f2 = 1;
	int n,i;
	scanf("%d",&n);
	for (i = 1;i <= (n / 2);i++)
	{
		printf("%12ld%12ld",f1,f2);
		if (i % 2 == 0) {
			printf("\n");
		}
		f2 = f1 + f2;
		f2 = f2 + f1;
	}
	return 0;
}
