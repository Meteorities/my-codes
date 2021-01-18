#include <stdio.h>
#include <math.h>
int main(void)
{
	int procode,quantity;
	double sum = 0.00;
	printf("%s\n%s\n","Enter pairs of item numbers and quantities.","Enter -1 for the item number to end input.");
	while (1) {
		scanf("%d",& procode);
		if (procode == (-1)) {
			break;
		}
		else {
			scanf("%d",& quantity);
			switch (procode) { 
				case 1: //好好复习这儿！'1' 还是 1？ 
				{
					sum += (2.98 * quantity);
					break;
				}
				case 2:
				{
					sum += (4.50 * quantity);
					break;
				}
				case 3:
				{
					sum += (9.98 * quantity);
					break;
				}
				case 4:
				{
					sum += (4.49 * quantity);
					break;
				}
				case 5:
				{
					sum += (6.87 * quantity);
					break;
				}
				default:
				{
					printf("Invalid product code:  %d\n            Quantity:  %d\n",procode,quantity);
				}
				}
			}
		}
	printf("The total retail value was:  %.2f\n",sum);
	return 0;
}
