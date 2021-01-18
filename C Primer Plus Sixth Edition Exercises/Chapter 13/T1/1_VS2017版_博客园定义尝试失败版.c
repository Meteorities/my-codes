#include <stdio.h>
#include <stdlib.h> // exit() prototype
#include <string.h> // for strlen() function
#define STRING_LEN 256

int main(void)
{
	int ch;         // place to store each character as read
	FILE *fp;       // "file pointer"
	unsigned long count = 0;

	char filename[STRING_LEN];
	printf("Please input the filename,the file should be in the same folder as program does: ");
	scanf_s("%s", filename, STRING_LEN);

	errno_t err;
	if ((err = fopen_s(&fp, filename, "r")) == 0)
	{
		printf("Can't open %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);  // same as putchar(ch);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n",filename, count);

	return 0;
}