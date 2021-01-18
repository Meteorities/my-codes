#include <stdio.h>
int main(void)
{
	void fun (int n);
	void (* funp) (int m);
	funp = fun;
	(*funp) (1);
	return 0;
}
void fun (int n)
{
	printf("Result :%d",n);
	return;
}
