#include <stdio.h>
#include <math.h>
int main(void)
{
	int x = 0,n = 0,i = 1,result = 1; //һ��Ҫ����result��������� 
	printf("Enter first integer:\n");
	scanf("%d",& x);
	printf("Enter second integer:\n");
	scanf("%d",& n);
	while (i <= n) {
		result = result * x;
		i++;
	}
	printf("%d\n",result);
	return 0;
}
