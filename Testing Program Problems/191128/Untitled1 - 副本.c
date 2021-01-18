#include <stdio.h>
#include <stdlib.h>

//void enterString(char str[]);
//void deleteChar(char str[], char ch);
//void printString(char str[]);

//int main(void) {
//    char c;
//    char s[80];
//
//    enterString(s);
//    scanf("%c", &c);
//    deleteChar(s, c);
//    printString(s);

//    return 0;
//}

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
	int i = 0;
	int j = 0;
	int count = 0;
	int total = 0;

	for (total = 0;str[total] != '\0';total++) {  //遍历获取字符串数组长度，代替strlen() 
		continue;
	}

	for (i = 0,j = 0,count = 0;i < total; i++) {  
        if (str[i] != ch) 
        str[j++] = str[i]; 
        else
            count++; 
    } 
      
    while(count > 0) 
    { 
        str[j++] = '\0'; 
        count--; 
    } 
	
}

void printString(char str[]) {
	int count = 0;
	for (count = 0;str[count] != '\0';count++) {
		putchar(str[count]);
	}
	printf("%s","\n");
}
