#include <stdio.h>
int main(void)
{
	char lowercase[26];
	char ch;
	int count;
	for (count = 0,ch = 'a'; count < 26,ch <= 'z'; count++,ch++) {
		lowercase[count] = ch;
	}
	for (count = 0; count < 26; count++) {
		printf("%c ", lowercase[count]);
	}
	return 0;
}