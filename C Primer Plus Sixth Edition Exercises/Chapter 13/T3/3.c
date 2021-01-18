#include <stdio.h>
#include <stdlib.h> //for exit()
#include <ctype.h> //for toupper()
#define STRLEN 256

int main(void) {
	char source[STRLEN];
	char temp[STRLEN] = "jacky.txt";  //中间文件 
	FILE *fp1,*fp2;
	char ch;  //当前操作的字符 
	int remove_flag = 0;  //for remove() function
	
	printf("Please input the filename which you want to operate: ");
	scanf("%s",source);
	
	if ((fp1 = fopen(source,"r")) == NULL) {
		printf("Can't open file \"%s\"\n",source);
		exit(EXIT_FAILURE);
	}	
	else if ((fp2 = fopen(temp,"w")) == NULL) {
		printf("Can't open file \"%s\"\n",temp);
		exit(EXIT_FAILURE);
	}
	
	while((ch = getc(fp1)) != EOF) {
		ch = toupper(ch);
		putc(ch,fp2);
	}
	
	fclose(fp1);
	fclose(fp2);  //生成中间文件后关闭两个文件流 
	
	if ((fp1 = fopen(source,"w+")) == NULL) {  //重新以不同模式打开两个文件流 //or "a+" mode 
		printf("Can't open file \"%s\" in append mode\n",source);
		exit(EXIT_FAILURE);
	}
	else if ((fp2 = fopen(temp,"r")) == NULL) {
		printf("Can't open file \"%s\" in read mode\n",temp);
		exit(EXIT_FAILURE);
	}
	
	while((ch = getc(fp2)) != EOF) {
		putc(ch,fp1);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	if ((remove_flag = remove(temp)) == 0) {
 		printf("Temp file delete success\n");
	}
	else {
		printf("Temp file delete fail\n");
	}
	
	printf("File \"%s\" had successfully copied with all characters to upper.\n",source);
	printf("Done.\n");
	
	return 0;
	
}
