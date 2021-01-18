#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int * p = NULL;
	int n,i;
	int total;
	scanf("%d",& n);
	p = (int *) malloc (n * sizeof(int) );
	if (NULL == p) {
		printf("Error\n");
		exit (1);
	}
	for (i = 0;i < n;i++) {
		scanf("%d",& p [i]);
	}
	total = 0;
	for (i = 0;i < n;i++) {
		total += p [i];
	}
	printf("total = %d\n",total);
	free (p);
	return 0;
}
