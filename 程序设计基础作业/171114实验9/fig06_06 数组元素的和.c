#include <stdio.h>
#include <math.h>
int main(void)
{
	int array [1000],i,j,out = 0;
	scanf("%d",& i);
	for (j = 0;j < i;j++) {
		scanf("%d",& array [j]);
		out = out + array [j];
	}
	printf("Total of array element values is %d",out);
	return 0;
}
