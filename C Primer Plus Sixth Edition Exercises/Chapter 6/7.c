#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[41];
	int count;
	printf("Please input a single word:\n");
	scanf_s("%s", input,41);
	printf("Here is the backward word:\n");
	for (count = strlen(input) - 1; count >= 0; count--) { //控制条件要注意，死在这里！
		printf("%c", input[count]);
	}
	return 0;
}