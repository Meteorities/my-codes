#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	while (scanf_s("%c", &ch) != EOF)
	{
		count++;
	}
	printf("Charactera had input:%d\n", count - 1); //��������Ļس���
	return 0;
}