#include <stdio.h>
int main(void)
{
	int a,b,max;
	printf("Enter two numbers:\n");
	scanf("%d%d",& a,& b);
	if (a>b) {
		max=a;
		printf("%d is larger\n",max);
	}
	if (a<b) {
		max=b;
		printf("%d is larger\n",max);
	}
	if (a==b) {
		printf("These numbers are equal\n");
	}
	return 0;
}
