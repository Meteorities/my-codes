#include <stdio.h>
#include <math.h>
int main(void)
{
	int start,i,a,b,c;
	start = 0;
	i = 1;
	printf("number  square  cube\n");
	while (i <= 11)
	{
		a = start;
		b = start * start;
		c = start * start * start;
		start = start + 1;
		i = i + 1;
		printf("%d       %d       %d\n",a,b,c);
	}
	return 0;
}
