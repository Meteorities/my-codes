#include <stdio.h>
/* 斐波那契数列（Fibonacci sequence），又称黄金分割数列,
因数学家列昂纳多·斐波那契（Leonardoda Fibonacci）以兔子繁殖为例子而引入，故又称为“兔子数列”，
指的是这样一个数列：1、1、2、3、5、8、13、21、34、……
在数学上，斐波纳契数列以如下被以递推的方法定义：F(1)=1，F(2)=1, F(n)=F(n-1)+F(n-2)（n>=3，n∈N*）
在现代物理、准晶体结构、化学等领域，斐波纳契数列都有直接的应用. */
int Fibonacci(int item_number);

int main(void)
{
	int num = 0;
	int result = 0;
	printf("请输入想要计算的斐波那契数列的项数（需为大于等于1的正整数）：");
	scanf("%d",&num);
	result = Fibonacci(num);
	printf("斐波那契数列的第%d项结果为：%d\n",num,result);
	return 0; 
}

int Fibonacci(int item_number) {
	if (item_number == 1) {
		return 1;
	}
	else if (item_number == 2) {
		return 1;
	}
	else {
		return (Fibonacci(item_number - 1) + Fibonacci(item_number - 2));
	}
}
