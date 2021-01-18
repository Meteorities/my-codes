#include <stdio.h>
int main(void)
{
	int a,b,transfer;
	scanf("%d%d",&a,&b);
	printf("Before swap a = %d, b = %d\n",a,b);
	transfer = a;
	a = b;
	b = transfer;
	printf("After swap a = %d, b = %d\n",a,b);
	return 0;
}
