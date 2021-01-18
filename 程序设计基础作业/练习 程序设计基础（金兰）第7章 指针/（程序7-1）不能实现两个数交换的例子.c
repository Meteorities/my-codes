#include <stdio.h>
int main(void)
{
	void swap (int x,int y);
	int a,b;
	scanf("%d%d",& a,& b);
	swap (a,b);
	printf("%d %d",a,b); 
	return 0;
}
void swap (int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;    //x,y虽已完成交换，但在swap函数结束后内存被自动释放 
}
