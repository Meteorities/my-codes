#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int tot_word = 1,tot_letter = 0;//tot_word的初值防止了只输入一个词时的出错情况
	char ch;
	double result;
	while ((ch = getchar()) != EOF) {
		switch (ch) {
		    case ' ':tot_word++; break;
			case '\n':break;
		    default:tot_letter++; break;
		}
		if (ispunct(ch)) {
			tot_letter--;
		}
	}
	result = ((double)tot_letter / (double)tot_word);
	printf("Average number of letters per word:%lf\n",result);
	return 0;
}