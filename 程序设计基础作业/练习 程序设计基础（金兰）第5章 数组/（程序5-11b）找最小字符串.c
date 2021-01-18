#include <stdio.h>
#include <string.h>
int main(void)
{
	char word [20][80];
	int n, i, min = 0;
	scanf("%d",& n);
	getchar(); //注意后面有分号 
	for (i = 0;i < n;i++) {
		gets (word [i]);	
	}
	if (word [20][80] == EOF) {
		return EOF;
	} 
	else {
		for (i = 1; i < n; i++) {
			if (strcmp(word[i], word[min]) < 0) {
				min = i;
		}
	}
	}
	puts (word [min]);
	return 0;
}
