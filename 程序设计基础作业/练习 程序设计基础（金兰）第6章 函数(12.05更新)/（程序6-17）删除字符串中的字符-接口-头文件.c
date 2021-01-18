#include <stdio.h>
#include <stdlib.h>

void enterString(char str[]);
void deleteChar(char str[], char ch);
void printString(char str[]);

int main()
{
    char c;
    char s[80];

    enterString(s);
    scanf("%c", &c);
    deleteChar(s, c);
    printString(s);

    return 0;
}

