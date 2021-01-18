#include <stdio.h>

void chline(char ch,int i,int j) {
	int count1;
	int count2;
	printf("\n");
	for (count1 = 0;count1 < i;count1++) {
		for (count2 = 0;count2 < j;count2++) {
			printf("%c",ch);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}

int main(void) {
	char ch;
	int i,j;
	printf("Please input the character you wants to print: ");
	scanf("%c",&ch);
	printf("Please input the row and the column number: ");
	scanf("%d %d",&i,&j);
	chline(ch,i,j);
	printf("Done.");
	return 0;
}
