#include <stdio.h>
#include <math.h>
#define N 100
int main(void)
{
	int i,number [N],m,n,l,j = 0,count = 0;
	scanf("%d%d",& m,& n);
	for (i = 0;i < m;i++)
	number [i] = i + 1;
	l = m;
	while (l > 1) {
	if (number [j] != 0) {
		count++;
	if (count == n)
	{
		number [j] = 0;
		count = 0;
		l--;   
	}
	}
		j++;
	if (j == m)
		j = 0;             
	}
	for (i = 0;i < m;i++)
	if(number [i] != 0) {
		printf("%d\n",number [i]); 	
	}
	return 0;
} 
