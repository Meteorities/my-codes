#include <stdio.h>
int main(void)
{
	int a,b,c,sum,average,product,min = 0,max = 0;
	printf("Input three different integers:\n");
	scanf("%d%d%d",&a,&b,&c);
	sum = a + b + c;
	average = (a + b + c) / 3;
	product = a * b * c;
	if (a > b) { //赋值方向始终要牢记！ 
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}
	if (max > c) {
		max = max;
	}
	else {
		max = c;
	}
	if (min > c) {
		min = c;
	}
	printf("Sum is %d\n",sum);
	printf("Average is %d\n",average);
	printf("Product is %d\n",product);
	printf("Smallest is %d\n",min);
	printf("Largest is %d\n",max);
	return 0;
}
