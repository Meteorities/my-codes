#include <stdio.h>
#include <stdlib.h> // exit() prototype
#include <string.h> // for strlen() function
#define STRING_LEN 256

int main(void)
{
	int ch;         // place to store each character as read
	FILE *fp;       // "file pointer"
	unsigned long count = 0;
	//char test_ch;

	char filename[STRING_LEN];
	printf("Please input the filename,the file should be in the same folder as program does: ");
	scanf_s("%s", filename, STRING_LEN);
	//fgets(filename, STRING_LEN, stdin);
	//for (count = 0; count < STRING_LEN; count++) {
	//	if ((test_ch = filename[count]) == '\n') {
	//		filename[count] = '\0';
	//		break;
	//	}
	//}

	//if ((fp = fopen_s(filename, "r")) == NULL)
	//Statement above cannot be used in VS2017,should use fopen_s()

	/* From Stackoverflow,about type "errno_t":
	errno_t is not a standard type; it's part of the optional 
	(and widely disliked and unsupported) 
	Annex K, included with ISO C11 only because of one particular vendor with
	a history of ignoring and sabotaging the standard.
	Since Annex K defines errno_t as int, the type of the errno object is int, 
	and all error codes are int, simply use int in your programs. 
	It's much more portable than relying on an optional feature 
	which is unlikely to be supported.
	*/

	/*	MSDN关于fopen_s()的补充：
	函数原型为 errno_t fopen_s(FILE** pFile, const char *filename, const char *mode);
	其中pFile指A pointer to the file pointer that will receive the pointer to the opened file.
	更多补充见书中所夹自打印资料。
	*/

	if ((int)fopen_s(&fp, filename, "r") == (int)NULL)
	{
		printf("Can't open %s\n", filename);
		//printf("Can't open ");
		//puts(filename);  //CAUTION!
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