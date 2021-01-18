#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f;
	printf("Input 5 integers:\n");
	scanf("%d",& a);
	b = a / 10000;
	c = a % 10000 / 1000;
	d = a % 10000 % 1000 / 100;
	e = a % 10000 % 1000 % 100 / 10;
	f = a % 10000 % 1000 % 100 % 10;
	if (b > c,b > d,b > e,b > f) printf("The largest value is %d\n",b);
	if (c > b,c > d,c > e,c > f) printf("The largest value is %d\n",c);
	if (d > b,d > c,d > e,d > f) printf("The largest value is %d\n",d);
	if (e > b,e > c,e > d,e > f) printf("The largest value is %d\n",e);
	if (f > b,f > c,f > d,f > e) printf("The largest value is %d\n",f);
	if (b < c && b < d && b < e && b < f) printf("The smallest value is %d\n",b);
	if (c < b && c < d && c < e && c < f ) printf("The smallest value is %d\n",c);
	if (d < b && d < c && d < e && d < f) printf("The smallest value is %d\n",d);
	if (e < b && e < c && e < d && e < f) printf("The smallest value is %d\n",e);
	if (f < b && f < c && f < d && f < e) printf("The smallest value is %d\n",f);
	return 0;
}
