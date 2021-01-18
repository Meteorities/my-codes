#include <stdio.h>
#include <math.h>
int main(void)
{
	int origin [30],i,j = 2;
	for (i = 0;i < 30;i++) {
		origin [i] = j;
		j += 2;
		printf("%d ",origin [i]);
		}
	printf ("\n");
	printf("%d.00 %d.00 %d.00 %d.00 %d.00 %d.00\n",origin [2],origin [7],origin [12],origin [17],origin [22],origin [27]);
	return 0;
}
