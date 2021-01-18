#include <stdio.h>
//recursive version
double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;
    printf("Enter an integer number and the integer power");
    printf(" to which the number will be raised.\nEnter q");
    printf(" to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x,exp);   // function call
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Done.\n");
    return 0;
}

double power(double n, int p)  // function definition
{
    double pow = 1;
    int i; 
    
    if (n == 0 && p != 0) {  //0的非零次幂 
    	pow = 0;
	} 
	else if (n == 0 && p == 0) {  //0的零次幂 
		printf("0的0次幂未定义。\n");	
		pow = 1;
	}
	else if (p >= 0){  //任意整数的正数幂 递归 有所参考 
			//总共递归p次，pow = p个n相乘（次幂的本质） 
	        pow *= n; //此语句代表执行到第几次递归，就准备出本次要乘的n，因为pow初值为1而不是n（也就是在总的计算式上，本次要乘第几个n，先把那个n准备好） 
	        if (p > 1) {
	        	pow *= power(n,p-1); //此语句相当于连接计算式的其他部分（递归接下来的计算式部分） 
			}
			//e.g., n = 2,p = 3
			//第一步，2 = 1 * 2(pow *= n); "?" = 2(pow的新值，准备出来的n) * power(2,2)(连接计算式的其他部分)
			//第二步，2 = 1 * 2(准备n); "?" = 2 * power(2,1)(连接)
			//第三步，2 = 1 * 2; 因为p不大于1(p = 1)，故没有其他部分需要连接了(不需要接着递归了)
	}		//逆推上去，第二步的？为4，第一步的？为8，输出8 
	else {  //任意整数的负数幂 
		p = -p;
		pow *= n;
		if (p > 1) {
			pow *= power(n,p-1);
		}
		pow = 1 / pow;
	}
    
    return pow;                // return the value of pow
}
