#include<stdio.h>
#include<string.h>
int main(void)
{
	char c;
	printf("输入一个字母:");
	scanf("%c",&c);
	if (((c)>='a')&&((c)<='z')) {
		printf("%c",c);
		printf("是小写字母\n");
	}
	else {
		printf("%c",c);
		printf("不是小写字母\n");	
	}
	return 0;
}
