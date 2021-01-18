#include <stdio.h>
int main(void)
{
	int array [1000];
	int n;
	int *pointer;
	scanf("%d",& n);
	for (pointer = array;pointer < (array + n);pointer++) {
		scanf("%d",pointer); 
	}
	for (pointer = array;pointer < (array + n);pointer++) {
		printf("%d ",*pointer); 
	}
	return 0;
}
