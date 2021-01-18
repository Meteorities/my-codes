#include <stdio.h>
int main(void)
{
	int a,b,out,calc;
	scanf("%d%d",&a,&b);
	calc = (a * a) + (b * b);
	if (calc <= 100)
	{
		out = a + b;
		printf("%d",out); 
	}
	if (calc > 100)
	{
		out = calc / 100;
		printf("%d",out);
	}
	return 0;
}
