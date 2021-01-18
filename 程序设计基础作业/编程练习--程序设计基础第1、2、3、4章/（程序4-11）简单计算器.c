#include <stdio.h>
#include <math.h>
int main(void)
{
	double a = 0,b = 0;
	char op;
	scanf("%lf%c%lf",&a,&op,&b); 
	if (b == 0) {
		printf("错误！除数不能为0！\n"); 
	}
	else
	switch (op)
	{
		case '+':
		printf("%f\n",a + b);
		break;
		
		case '-': 
		printf("%f\n",a - b);
		break;
		
		case '*': 
		printf("%f\n",a * b);
		break;
		
		case '/': 
		printf("%f\n",a / b);
		break;
		
		default:
		printf("Input error!\n");
		break;	
		
	} 
	return 0;
}

