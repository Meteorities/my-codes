#include <stdio.h>
int main(void)
{
	int n,incount,oucount = 1;
	scanf("%d",&n);
	while (oucount <= n)
	{
		incount = 1; //赋值内层循环的计数变量只能在里面！ x2 
		while (incount <= oucount)
		{
			printf("*");
			incount = incount + 1; //要有这句话 x1 
		}
		oucount = oucount + 1;
		printf("\n");
	}
	return 0;
}
