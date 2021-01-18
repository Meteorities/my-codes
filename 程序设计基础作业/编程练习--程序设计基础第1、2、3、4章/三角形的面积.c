#include <stdio.h>
#include <math.h>
int main(void)
{
	double area,a,b,c,a1,a2,b1,b2,c1,c2,trans,s;
	scanf("%lf%lf%lf%lf%lf%lf",& a1,& a2,& b1,& b2,& c1,& c2);
	a = sqrt( (a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2) );
	b = sqrt( (a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2) );
	c = sqrt( (b1 - c1) * (b1 - c1) + (b2 - c2) * (b2 - c2) );
	s = (a + b + c) / 2;
	trans = s * (s - a) * (s - b) * (s - c);
	area = sqrt(trans);
	printf("%.2f\n",area);
	return 0;
}
