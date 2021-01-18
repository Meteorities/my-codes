#include <stdio.h>
#include <math.h>
int main(void)
{
	double area,a,b,c,a1,a2,b1,b2,c1,c2,trans1,trans2,trans3,trans4,s;
	printf("Enter the coordinates of the three vertices of the triangle:\n");
	scanf("%lf%lf%lf%lf%lf%lf",& a1,& a2,& b1,& b2,& c1,& c2);
	a = (a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2);
	trans1 = pow (a,0.5);
	b = (a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2);
	trans2 = pow (b,0.5);
	c = (b1 - c1) * (b1 - c1) + (b2 - c2) * (b2 - c2);
	trans3 = pow (c,0.5);
	s = (a + b + c) / 2;
	trans4 = s * (s - a) * (s - b) * (s - c);
	area = pow (trans4,0.5);
	printf("Area of the triangle is: %.2lf\n",area);
	return 0;
}
