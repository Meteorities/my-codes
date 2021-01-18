#include <stdio.h> //program comes up with learning null statement @ page 168
#include <string.h>
int main(void)
{
	int i = 6;
	int j;
	int test = 0;
	int p[i][j];
	for(j = 0;p[i][j] > '\0' && p[i][j] <= '9';j += 2);
	//test = for(j = 0;p[i][j] > '\0' && p[i][j] <= '9';j += 2); cautious!
	printf("%d\n",test);
	test = printf("%d\n",test);
	//printf("%s %d\n","666",test);
	printf("%d\n",test);
	//strlen()
	return 0;
}
