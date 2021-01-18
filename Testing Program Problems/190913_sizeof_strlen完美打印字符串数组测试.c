#include <stdio.h>
#include <string.h>

int main(void)
{
	const char * MONTHS[12] = { "January","February","March","April","May","June",
		"July","August","September","October","November","December" };
	unsigned int counta,countb;
	for (counta = 0; counta < (unsigned int)12; counta++) {
		for (countb = 0;countb < (unsigned int)strlen(*(MONTHS + counta));countb++) {
		//for (countb = 0; countb < (sizeof(*(*(MONTHS + counta) + countb))+ 1); countb++) {
			//printf("%d\n", (sizeof(*(*(MONTHS + counta) + countb)) + 1));
			//printf("%d\n", strlen(*(MONTHS + counta)));
			printf("%c", *(*(MONTHS + counta) + countb));
		}
		printf("\n");
	}
	return 0;
}