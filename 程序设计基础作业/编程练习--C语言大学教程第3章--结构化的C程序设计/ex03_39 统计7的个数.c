#include <stdio.h>
int main(void)
{
	int number,count = 0,memory;
	printf("Enter a number:\n");
	scanf("%d",& number);
	memory = number;
	while (number) {   //��λȡ�ࡣ�����ο��� 
		if (number % 10 == 7) {
			count++;
		}
		number = number / 10;
	}
	printf("The number %d has %d seven(s) in it\n",memory,count); 
	return 0;
}
