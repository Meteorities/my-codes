#include <stdio.h>
int main(void)
{
	int value [1000],i,n,j;
	scanf("%d",& n);
	printf("Element        Value        Histogram\n"); 
	for (i = 0;i < n;i++) {
		scanf("%d",& value [i]);
		printf("%7d%13d        ",i,value [i]);
		for (j = 0;j < value [i];j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
