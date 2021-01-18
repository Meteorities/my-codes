#include <stdio.h>
#include <stdlib.h>  //for exit() and EXIT_FAILURE

int main(int argc, char *argv[])
{
	FILE *fp1;
	FILE *fp2;
	char ch;
	
	if (argc != 3) {
		printf("Usage: %s filename_copy_from filename_copy_to\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	
	else if ((fp1 = fopen(argv[1],"rb")) == NULL) {
		printf("Can't open file \"%s\"",argv[1]);
		exit(EXIT_FAILURE);
	}
	
	else if ((fp2 = fopen(argv[2],"wb")) == NULL) {
		printf("Can't open file \"%s\"",argv[2]);
		exit(EXIT_FAILURE);
	}
	
	else {
		
		while ((ch = getc(fp1)) != EOF) {
			putc(ch,fp2);
		}
		
	}
	
	fclose(fp1);
	fclose(fp2);  //Caution!
	printf("File \"%s\" had successfully copied to \"%s\".\n",argv[1],argv[2]);
	printf("Done.\n");
	
	return 0;
	
}
