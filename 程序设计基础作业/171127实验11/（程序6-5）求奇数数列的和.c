#include <stdio.h>
int main(void)
{
	int sum (int i);
	int n,test;
	scanf("%d",& n);
	test = sum(n);
	printf("%d\n",test);
	return 0;
} 
int sum (int n) {
		int i,out = 0;
		for (i = 1;i <= n;i++) { //×¢Òâ <= ! 
			out += (2 * i) - 1;
		}
		return out;
	}
