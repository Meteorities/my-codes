#include <stdio.h>
#include <math.h>
int main(void)
{
	int in,in1,in2,in3,in4,extemp1,extemp2;
	printf("Please input a 4-digit number you wish to unencrypt:\n");
	scanf("%d",& in);
	in1 = in / 1000 % 10;
	in2 = in / 100 % 10;
	in3 = in / 10 % 10;
	in4 = in % 10;
	if (in1 >= 0 && in1 <= 2) {
		in1 += 7;
	}
	if (in2 >= 0 && in2 <= 2) {
		in2 += 7;
	}
	if (in3 >= 0 && in3 <= 2) {
		in3 += 7;
	}
	if (in4 >= 0 && in4 <= 2) {
		in4 += 7;
	}
	if (in1 >= 3 && in1 <= 9) {
		in1 = (in1 + 10) - 7;
	}
	if (in2 >= 3 && in2 <= 9) {
		in2 = (in2 + 10) - 7;
	}
	if (in3 >= 3 && in3 <= 9) {
		in3 = (in3 + 10) - 7;
	}
	if (in4 >= 3 && in4 <= 9) {
		in4 = (in4 + 10) - 7;
	}
	extemp1 = in1;
	in3 = in1;
	in1 = extemp1;
	extemp2 = in2;
	in4 = in2;
	in2 = extemp2;
	printf("The encrypted number is %0d%d%d%d\n",in1,in2,in3,in4);
	return 0;
} 
