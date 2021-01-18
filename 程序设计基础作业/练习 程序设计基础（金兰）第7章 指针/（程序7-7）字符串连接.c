#include <stdio.h>
#define N1 100
#define N2 100
#define N 200
void link (char s1 [],char s2 [],char s []);
int main(void)
{
	char string1 [N1],string2 [N2],string [N];
	gets (string1);
	gets (string2);
	link (string1,string2,string);
	puts (string);
	return 0;
}
void link (char s1 [],char s2 [],char s [])
{
	int index,position;
	position = 0;
	for (index = 0;s1 [index] != '\0';index++) {
		s [position] = s1 [index];
		position++;
	}
	for (index = 0;s2 [index] != '\0';index++) {
		s [position] = s2 [index];
		position++;
	}
	s [position] = '\0';
	return;
}
