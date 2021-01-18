#include <stdio.h>

void to_base_n(int num,int base_num);

int main(void)
{
	int number,base_number;
	printf("Please input the number and the base number(2-10) you wants to convert:\n");
	scanf("%d %d",&number,&base_number);
	printf("%d converts to base %d is: ",number,base_number);
	to_base_n(number,base_number);
	return 0;
}

/* 网上自寻说明：
这个是用求余来算，比如求十进制数 x(x>100) 的8进制，先通过 x%8 可以得到个位（末位）上的数
（你可以思考一下，为什么是求余得到的结果作为个位，当十进制数等于8时，必然会进位，
求余的结果正好是不能进位的部分），再 x=x/8（这就像位移，x的8进制数向右移了一位），
这样已经求出来的 个位 位移后没有了，原来的十位变成了个位，继续把得到的x按上面的方式求末位，
就能求出来十位，按照这种方式得到的 8进制数 是反的（先得到个位，再十位。。。），这样很适合放到栈中，
取得时候又会反过来 */
void to_base_n(int num,int base_num) { //借鉴他人递归方法 
	if (num > 0) {
		to_base_n((num / base_num),base_num); //此句将取完余的位去掉，继续求输入数字剩余部分的对应输入进制的余，直至0 
		printf("%d",(num % base_num)); /* 此句放在该位置，刚好利用递归调用的特点
		（递归函数中位于递归调用之后的语句，均按被调函数相反的顺序执行），使取余结果逆序输出*/
	}
}
