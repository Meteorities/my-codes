#include <stdio.h>
int boring(int n)
{ 
	n++;
	++n;
	n += n;
	return n;
}
int main(void)
{
	int boring(int n);
	int i = 0;
	scanf("%d",& i);
	boring(i);
	printf("%d\n", i);
	return 0;
}
