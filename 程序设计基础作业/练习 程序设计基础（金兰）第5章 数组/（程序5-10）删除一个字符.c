#include <stdio.h>
#include <string.h>
int main(void)
{
	char origin [80];
	int m,i = 0;
	gets (origin);
	scanf("%d",& m);
	for (i = m;i < strlen (origin);i++) {
			origin [i - 1] = origin [i]; //Core code! 
	}
	origin [i - 1] = '\0';
	puts (origin);
	return 0;
} 
