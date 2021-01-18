#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char * p [3] = {"Heilongjiang"," Technology"," Institute of"};
	char *temp;
	
	temp = p [1];
	p [1] = p [2];
	p [2] = temp;
	
	printf("%s%s%s\n",p [0],p [1],p [2]);
	return 0;
}
