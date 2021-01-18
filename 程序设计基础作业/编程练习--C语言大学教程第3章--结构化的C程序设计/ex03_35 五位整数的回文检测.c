#include <stdio.h>
int main(void)
{
	int number,a,b,c,d;
	printf("Enter a five-digit number:\n");
	scanf("%d",& number);
	a = number / 10000 % 10;
	b = number / 1000 % 10;
	c = number / 10 % 10;
	d = number / 1 % 10;
	if (a == d && b == c) {
		printf("%d is a palindrome\n",number);
	}
	else {
		printf("%d is not a palindrome\n",number);
	}
	return 0;
}
