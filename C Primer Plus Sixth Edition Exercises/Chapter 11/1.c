#include <stdio.h>

void store_string_into_array(char array[],int MAX_SIZE);

int main(void)
{
	int MAX_SIZE = 0;
	int count = 0;
	printf("Please input the max size of the string array: ");
	scanf("%d",&MAX_SIZE);
	char string[MAX_SIZE];
	printf("Please keep entering string until EOF:\n");
	while (getchar() != EOF) {
		store_string_into_array(string,MAX_SIZE);
		continue;
	}
	printf("Your array's content is:\n");
	//for (count = 0;count < MAX_SIZE;count++) {
	//	printf("%s",string[count]);
	//}
	fputs(string,stdout);
	return 0;
}

void store_string_into_array(char array[],int MAX_SIZE) {
	fgets(array,MAX_SIZE,stdin);
}
