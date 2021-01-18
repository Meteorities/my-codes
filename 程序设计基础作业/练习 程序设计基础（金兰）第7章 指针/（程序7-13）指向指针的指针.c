#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char * pArr [3] = {"Heilongjiang"," Technology"," Institute of"};
	char **pp,*temp;
	
	pp = pArr;
	temp = pp [1];
	pp [1] = pp [2];
	pp [2] = temp;
	
	printf("%s%s%s\n",pp [0],pp [1],pp [2]);
	return 0;
}
