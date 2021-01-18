#include <stdio.h>
#define N1 100
#define N2 100
#define N 200
void link (char *pStr1,char *pStr2,char *pStr);
int main(void)
{
	char string1 [N1],string2 [N2],string [N];
	gets (string1);
	gets (string2);
	link (string1,string2,string);
	puts(string);
	return 0;
}
void link (char *pStr1,char *pStr2,char *pStr)
{
	while (*pStr++ = *pStr1++) {
		;
	}
	pStr--;
	
	while (*pStr++ = *pStr2++) {
		;
	}
	
	return;
}
