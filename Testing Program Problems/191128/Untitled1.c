#include <stdio.h>
#include <stdlib.h>

void enterString(char str[]);
void deleteChar(char str[], char ch);
void printString(char str[]);

int main(void) {
    char c;
    char s[80];

    enterString(s);
    scanf("%c", &c);
    deleteChar(s, c);
    printString(s);

    return 0;
}

void enterString(char str[]) {
	char ch; 
	int count = 0;
	while ((ch = getchar()) != '\n') {
		str[count] = ch;
		count++;
	}
	str[count] = '\0';
}

void deleteChar(char str[],char ch) {
	int count = 0;
	char temp = str[0];
	
	while (temp != ch) {  //找出字符位置 
		count++;
		temp = str[count];
		continue;
	}
	
	//if (str[(count + 1)] == '\0') {  //删除的是最后一个字符 
	//	str[count] = str[(count + 1)];
	//}
  	//else {	
	while (str[(count + 1)] != '\0') {  //删除的不是最后一个字符
		temp = str[count];  //临时保存待删字符 
		str[count] = str[(count + 1)];  //后续字符前移
		str[(count + 1)] = temp;
		count++; 
	}
	str[count] = '\0';  //删除待删字符 
	//}
	count = 0;
	 
}

void printString(char str[]) {
	int count = 0;
	for (count = 0;str[count] != '\0';count++) {
		putchar(str[count]);
	}
	printf("%s","\n");
}
