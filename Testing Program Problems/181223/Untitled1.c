#include<stdio.h>
#include<string.h>
#define max(a,b) a>b? a:b
#define ISLOWER(c) (((c)>='a')&&((c)<='z'))
int main(void)
{
	int x = 0,y = 0,n = 0;
	char c;
	printf("1-比较两个数字");
	printf("2-判断是否小写字母\n");
	printf("输入程序命令:");
	scanf("%d",&n);
	if(n<1||n>2)
		printf("请输入正确的命令"); 
	else if(n==1){
		printf("输入两个数字:"); 
		scanf("%d%d",&x,&y);
		x=max(x,y);
		printf("最大值为 %d",x); 
	}
	else if(n==2){
		printf("输入一个字母:");
		getchar();
		scanf("%c",&c);
		y=ISLOWER(c);
		printf("%c",c);
		if(y)
			printf("是小写字母\n");
		else 
			printf("不是小写字母\n");
	}
	return 0;
}
