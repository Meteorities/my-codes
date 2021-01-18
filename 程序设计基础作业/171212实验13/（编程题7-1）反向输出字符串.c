#include <stdio.h>
#include <string.h>
void reverse (char string [200],int n)
{
	int temp,i;
	for (i = 0;i < (n / 2);i++) {
		temp = string [i];
		string [i] = string [(n - 1 - i)];
		string [(n - 1 - i)] = temp;
	}
}
int main(void)  //ÕÛ°ë²éÕÒ·¨£¬ÓÐcd 
{
	void reverse (char string [200],int n);
	char string [200];
	int count,i;
	gets (string);
	count = strlen (string);
	reverse (string,count);
	for (i = 0;i < count;i++) {
		printf("%c",string [i]);
	}
	return 0;
}
