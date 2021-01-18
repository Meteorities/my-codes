#include <stdio.h> //不完美的二分查找（∵/的趋零截短） 
//有所参考官方答案 
#define MIN_LIMIT 1
#define MAX_LIMIT 100
int main(void)
{
	int max_limit = MAX_LIMIT;
	int min_limit = MIN_LIMIT;
	int guess = (max_limit + min_limit) / 2;
	char ch;
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong,h if it is high,and l if it is low\n");
	printf("Uh...is your number %d?\n", guess);
	while((ch = getchar()) != 'y') {
		if (ch == '\n') {
			continue;
		}
		if (ch != 'h' && ch != 'l') {
			printf("Please input \"h\" for higher guess,input \"l\" for ");
			printf("lower guess,\ninput \"y\" for guessing it right.\n");
			continue;
		}
		if (ch == 'h') {
			max_limit = guess - 1; //因为guess已不是猜的那个数 
		}
		if (ch == 'l') {
			min_limit = guess + 1; //因为guess已不是猜的那个数 
		}
		guess = (max_limit + min_limit) / 2;
		printf("Well, then, is it %d?\n", guess);
	}
	//while ((ch = getchar()) != 'y') {
	//	printf("If my guess is higher than your thought,please input \"h\",otherwise,\n");
	//	printf("please input \"l\"\n");
	//	getchar(); //读掉输入n时的回车
	//	ch = getchar(); //输入n后将读取新的字符
	//	switch (ch) {
	//	    case 'h': guess = guess / 2; break;
	//		case 'l': guess = guess + ((MAX_LIMIT - guess) / 2); break;
	//		default: break;
	//	}
		//if (guess < MIN_LIMIT || guess > MAX_LIMIT || guess == MAX_LIMIT) {
		//	printf("You fucking fool me!\n");
		//	getchar(); //读掉输入h或l后残留在输入流中的字符
		//	ch = 'y';
		//}
		//else {
		//	printf("Well, then, is it %d?\n", guess);
		//	getchar(); //读掉输入h或l后残留在输入流中的字符
		//}
	//}
	printf("I knew I could do it!\n");
	return 0;
}
//double binarySearch(double l_border, double r_border) {
//	double linshi;
//	linshi = (r_border - l_border) / 2;
//	return linshi;
//}
