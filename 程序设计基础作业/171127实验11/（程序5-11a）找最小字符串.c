#include <stdio.h>
#include <string.h>
int main(void)
{
	char word [20][80];
	int n, i, min = 0;
	scanf("%d",& n);
	getchar(); //ע������зֺ� 
	for (i = 0;i < n;i++) {
		gets (word [i]);	
	}
	for (i = 1; i < n; i++) {
		if (strcmp(word[i], word[min]) < 0) {
			min = i;
		}
	}
	puts (word [min]);
	return 0;
}
