#include <stdio.h>
int main(void)
{
	int array [1000];
	int n,i;
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		scanf("%d",(array + i));
	}
	for (i = 0;i < n;i++) {
		printf("%d ",*(array + i));
	}
	return 0;
}
