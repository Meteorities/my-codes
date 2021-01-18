#include <stdio.h>
#include <math.h>
int main(void)
{
	int account = 0,control = 1;
	double beginb,balance,charge,credit,limit;
	while (control == 1) {
		printf("Enter account number ( -1 to end ):\n");
		scanf("%d",& account);
		if (account >= 0) {
			printf("Enter beginning balance:\n");
			scanf("%lf",& beginb);
			printf("Enter total charges:\n");
			scanf("%lf",& charge);
			printf("Enter total credits:\n");
			scanf("%lf",& credit);
			printf("Enter credit limit:\n");
			scanf("%lf",& limit);
			balance = beginb + charge - credit;
			printf("Account:      %d\n",account);
			printf("Credit limit: %.2f\n",limit);
			printf("Balance:      %.2f\n",balance);
		if (balance > limit) {
			printf("Credit Limit Exceeded.\n");
		}
		if (balance < limit) {
			printf("Credit Limit Not Exceeded.\n");
		}
		}
		if (account < 0) {
			control = 0;
		}
	}
	return 0;
}
