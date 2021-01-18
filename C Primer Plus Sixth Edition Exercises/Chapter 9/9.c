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
    
    if (n == 0 && p != 0) {  //0�ķ������ 
    	pow = 0;
	} 
	else if (n == 0 && p == 0) {  //0������� 
		printf("0��0����δ���塣\n");	
		pow = 1;
	}
	else if (p >= 0){  //���������������� �ݹ� �����ο� 
			//�ܹ��ݹ�p�Σ�pow = p��n��ˣ����ݵı��ʣ� 
	        pow *= n; //��������ִ�е��ڼ��εݹ飬��׼��������Ҫ�˵�n����Ϊpow��ֵΪ1������n��Ҳ�������ܵļ���ʽ�ϣ�����Ҫ�˵ڼ���n���Ȱ��Ǹ�n׼���ã� 
	        if (p > 1) {
	        	pow *= power(n,p-1); //������൱�����Ӽ���ʽ���������֣��ݹ�������ļ���ʽ���֣� 
			}
			//e.g., n = 2,p = 3
			//��һ����2 = 1 * 2(pow *= n); "?" = 2(pow����ֵ��׼��������n) * power(2,2)(���Ӽ���ʽ����������)
			//�ڶ�����2 = 1 * 2(׼��n); "?" = 2 * power(2,1)(����)
			//��������2 = 1 * 2; ��Ϊp������1(p = 1)����û������������Ҫ������(����Ҫ���ŵݹ���)
	}		//������ȥ���ڶ����ģ�Ϊ4����һ���ģ�Ϊ8�����8 
	else {  //���������ĸ����� 
		p = -p;
		pow *= n;
		if (p > 1) {
			pow *= power(n,p-1);
		}
		pow = 1 / pow;
	}
    
    return pow;                // return the value of pow
}
