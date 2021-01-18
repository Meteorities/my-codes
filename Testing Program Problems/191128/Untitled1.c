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
	
	while (temp != ch) {  //�ҳ��ַ�λ�� 
		count++;
		temp = str[count];
		continue;
	}
	
	//if (str[(count + 1)] == '\0') {  //ɾ���������һ���ַ� 
	//	str[count] = str[(count + 1)];
	//}
  	//else {	
	while (str[(count + 1)] != '\0') {  //ɾ���Ĳ������һ���ַ�
		temp = str[count];  //��ʱ�����ɾ�ַ� 
		str[count] = str[(count + 1)];  //�����ַ�ǰ��
		str[(count + 1)] = temp;
		count++; 
	}
	str[count] = '\0';  //ɾ����ɾ�ַ� 
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
