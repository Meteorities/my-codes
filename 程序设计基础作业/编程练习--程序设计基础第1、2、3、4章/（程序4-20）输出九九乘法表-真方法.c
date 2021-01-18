#include <stdio.h>
#include <math.h>
int main(void) //work harder to fully understand this method!
{
	int i,n;
	for (i = 1;i <= 9;i++)
	{
		for (n = 1;n <= i;n++)
		{
			printf("%d*%d= %d ",i,n,i * n);
		}
	printf("\n");	
	}
	return 0;
}
