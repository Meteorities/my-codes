//C语言 8进制 16进制转义字符测试
//相关内容：c++关键字 wchar_t(c11)
#include <stdio.h>
int main(void)
{
	char *test = "0x2605";
	printf("%c  %s", '\123', test);
	return 0;
}