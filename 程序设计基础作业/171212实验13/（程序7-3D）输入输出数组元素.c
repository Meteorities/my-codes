#include <stdio.h>
int main(void)
{
	int array [1000];
	int n,i;
	int *pointer;
	scanf("%d",& n);
	pointer = array;
	for (i = 0;i < n;i++) {
		scanf("%d",pointer + i);
	}
	for (i = 0;i < n;i++) {
		printf("%d ",*(pointer + i));
	}
	return 0;
}
