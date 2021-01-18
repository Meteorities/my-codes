#include <stdio.h>
#include <math.h>
int main(void)
{
	int account,i;
	double limit,balance;
	for (i = 0;i < 3;i++) {
		printf("%s\n","Enter account, limit, balance:");
		scanf("%d%lf%lf",& account,& limit,& balance);
		printf("New credit limit for account %d: %.2f\n",account,(limit / 2));
		if (balance > (limit / 2)) {
			printf("Limit exceeded for account %d\n",account);
		}	
	}
	return 0;
} 
