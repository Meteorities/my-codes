#include <stdio.h>
#include <math.h>
int main(void)
{
	int in,in1,in2,in3,in4,extemp1,extemp2;
	printf("%s","Please input a 4-digit number you wish to encrypt:\n");
	scanf("%d",& in);
	in1 = in / 1000 % 10;
	in2 = in / 100 % 10;
	in3 = in /10 % 10;
	in4 = in % 10;
	in1 = (in1 + 7) % 10;
	in2 = (in2 + 7) % 10;
	in3 = (in3 + 7) % 10;
	in4 = (in4 + 7) % 10;
	extemp1 = in1;
	in1 = in3;
	in3 = extemp1;
	extemp2 = in2;
	in2 = in4;
	in4 = extemp2;
	printf("The encrypted number is %0d%d%d%d\n",in1,in2,in3,in4);
	return 0;
}
