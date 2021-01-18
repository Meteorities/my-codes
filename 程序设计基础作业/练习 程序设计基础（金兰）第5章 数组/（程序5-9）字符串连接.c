#include <stdio.h>
//不使用字符串处理函数 
int main(void)
{
	char string1 [100],string2 [100];
	gets (string1);
	gets (string2);
	printf("%s%s",string1,string2); //投机！ 
	return 0;
}
