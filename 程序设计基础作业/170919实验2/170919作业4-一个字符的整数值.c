#include <stdio.h>
#include <math.h>
int main(void)
{
	char ch;
	printf("Please enter a character\n");
	scanf("%c", & ch);
	printf("%c's integer equivalent is ", ch);
	printf("%d\n", ch);
	return 0;
}
