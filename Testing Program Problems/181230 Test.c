#include <stdio.h>
//Explain why while(0) means false.
int main(void)
{
	int test = 0;
	scanf("%d",& test);
	while(test) {
		printf("%s","*****Success!*****\n");
		break;
	}
	return 0;
}
