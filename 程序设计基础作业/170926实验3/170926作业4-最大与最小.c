#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,d,e,max,min;
	printf("Input 5 integers:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	max = 0;
	min = 0;
	if (a > b) {
		max = a;
		min = b;
	} 
	if (a < b) {
		max = b;
		min = a;
	}
	if (max < c) {
		max = c;
	}
	if (min > c) {
		min = c;
	}
	if (max < d) {
		max = d;
	}
	if (min > d) {
		min = d;
	}
	if (max < e) {
		max = e;
	}
	if (min > e) {
		min = e;
	}
	printf("The largest value is %d\n",max);
	printf("The smallest value is %d\n",min);
	return 0;
}
