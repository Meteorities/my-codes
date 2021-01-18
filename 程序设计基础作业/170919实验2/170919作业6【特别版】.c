#include <stdio.h>
#include <math.h>
int main(void)
{
	int start,i,a,b,c;
	int d,d1,d2,e,e1,e2,f,f1,f2,g,g1,g2,h,h1,h2,j,j1,j2,k,k1,k2;
	start = 0;
	i = 1;
	printf("number  square  cube\n");
	while (i <= 4)
	{
		a = start;
		b = start * start;
		c = start * start * start;
		start = start + 1;
		i = i + 1;
		printf("%d       %d       %d\n",a,b,c);
	}
	d = 4;
	d1 = d * d;
	d2 = d * d * d;
	printf("%d       %d      %d\n",d,d1,d2);
	
	e = 5;
	e1 = e * e;
	e2 = e * e * e;
	printf("%d       %d      %d\n",e,e1,e2);
	
	f = 6;
	f1 = f * f;
	f2 = f * f * f;
	printf("%d       %d      %d\n",f,f1,f2);
	
	g = 7;
	g1 = g * g;
	g2 = g * g * g;
	printf("%d       %d      %d\n",g,g1,g2);
	
	h = 8;
	h1 = h * h;
	h2 = h * h * h;
	printf("%d       %d      %d\n",h,h1,h2);
	
	j = 9;
	j1 = j * j;
	j2 = j * j * j;
	printf("%d       %d      %d\n",j,j1,j2);
	
	k = 10;
	k1 = k * k;
	k2 = k * k * k;
	printf("%d      %d     %d\n",k,k1,k2);
	return 0;
}
