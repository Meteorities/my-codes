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
	return;    //x,y������ɽ���������swap�����������ڴ汻�Զ��ͷ� 
}
