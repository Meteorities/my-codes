#include <stdio.h>
int n,a,b,c,d,e;
int main(void)
{
	printf("Enter a five-digit number:\n");
	scanf("%d", & n);
	a = n/10000%10;
	b = n/1000%10;
	c = n/100%10;
	d = n/10%10;
	e = n%10;
	printf("%d",a);
	printf("   %d",b);
	printf("   %d",c);
	printf("   %d",d);
	printf("   %d",e);
	return 0;
	}
