/* 有所借鉴 @ 2019-09-22 17:53:14 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int enter_num = 0;
	int count;
	char ** ch;
	char * pointer;  //指向为每个单词动态分配的、刚好足够放入单词的空间
	char string[50];  //承载每个单词的临时字符串数组

	printf("How many words do you wish to enter?\n");
	while (scanf_s("%d", &enter_num) != 1 || enter_num <= 0) {
		while (getchar() != '\n') {
			continue;
		}
		printf("Please try again to input the right number.\n");
	}
	ch = (char **)malloc(enter_num * sizeof(char*));

	printf("\nEnter %d word(s) now:\n", enter_num);
	for (count = 0; count < enter_num; count++) {
		scanf_s("%s", string, enter_num);
		pointer = (char *)malloc(sizeof(string));  //依据每个单词真实字符串长度动态分配的空间
		strcpy_s(pointer, sizeof(string), string);
		ch[count] = pointer;  //ch + count = pointer; 编译失败
	}

	printf("\nHere are your words:\n");
	for (count = 0; count < enter_num; count++) {
		puts(ch[count]);  //puts(ch + count); 编译失败
		free(ch[count]);  //释放储存各个单词的临时空间  //free(ch + count); 编译失败
	}
	free(ch);
	return 0;
}