#include <stdio.h>
int main(void)
{
	int n,incount,oucount = 1;
	scanf("%d",&n);
	while (oucount <= n)
	{
		incount = 1; //��ֵ�ڲ�ѭ���ļ�������ֻ�������棡 x2 
		while (incount <= oucount)
		{
			printf("*");
			incount = incount + 1; //Ҫ����仰 x1 
		}
		oucount = oucount + 1;
		printf("\n");
	}
	return 0;
}
