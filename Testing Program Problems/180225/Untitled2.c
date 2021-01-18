#include <stdio.h>
int main(void)
{
	int i = 0;
	scanf("%d",& i);
	printf("Your input: %d\n", i);
	i++;
	printf("After dealing with i++: %d\n",i);
	++i;
	printf("Dealing with the next step ++i: %d\n",i);
	i += i;
	printf("Dealing with i += i: %d\n",i);
	return 0;
}
