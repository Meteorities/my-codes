#include<stdio.h>
#include<string.h>
int main(void)
{
	char c;
	printf("����һ����ĸ:");
	scanf("%c",&c);
	if (((c)>='a')&&((c)<='z')) {
		printf("%c",c);
		printf("��Сд��ĸ\n");
	}
	else {
		printf("%c",c);
		printf("����Сд��ĸ\n");	
	}
	return 0;
}
