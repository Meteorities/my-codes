#include <stdio.h> //受人启发所答，自己稍作改动
int main(void)
{
	char ch;
	int count = 0;
	printf("%s\n", "Please input the text you want to analyse(input \"#\" to end):");
	while ((ch = getchar()) != '#') {
		if (ch == 'e' && ((ch = getchar()) == 'i')) { //记得用()括起优先执行的语句！
			count++;
		}
		if (ch == '#') { //防止在字段中途插入井号/第二次getchar输入井号
			printf("String \"ei\" had shown 0 time(s).\n");
			return 0;
		}
	}
	printf("String \"ei\" had shown %d time(s).\n", count);
	return 0;
}