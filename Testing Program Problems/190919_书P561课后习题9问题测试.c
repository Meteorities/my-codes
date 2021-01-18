#include <stdio.h>

int value_ct(const int arr[],const int value,const int n);

int main(void)
{
	int number[100] = {0};
	int value = 666;
	int n = 100;
	value_ct(number,value,n);
	printf("********************\n");
	value = 888;
	n = 101;
	value_ct(number,value,n);
	return 0;
}

int value_ct(const int arr[],const int value,const int n)
{
	printf("The first number in number[100] is: %d\n",*arr);
	printf("The \"present\" value of variable \"value\" is: %d\n",value);
	printf("The \"present\" value of variable \"n\" is: %d\n",n);
}
