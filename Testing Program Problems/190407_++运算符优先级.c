#include <stdio.h>
int main(void)
{
	int test_a = 0;
	int test_b = 1;
	++test_b = ++test_a;
	printf("%d %d\n",test_a,test_b);
	return 0; 
}

//possible statement order:
//++b
//++a
//new_b = new_a 
