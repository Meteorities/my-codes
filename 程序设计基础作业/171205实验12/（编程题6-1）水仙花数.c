#include <stdio.h>
#include <math.h> 
int isNarcissus(int n)
{
	int in,in1,in2,in3;
	scanf("%d",& in);
	in1 = in / 100 % 10;
	in2 = in / 10 % 10;
	in3 = in % 10;
	n = pow(in1,3) + pow(in2,3) + pow(in3,3);
	if (n == in) {
		return 1;
	}
	if (n != in) {
		return 0;
	} 
}
int main(void)
{
	int isNarcissus(int n);
	int judge,n = 0;
	judge = isNarcissus (n);
	if (judge == 0) {
		printf("%s\n","NO");
	}
	if (judge == 1) {
		printf("%s\n","YES");
	}
	return 0;
}
