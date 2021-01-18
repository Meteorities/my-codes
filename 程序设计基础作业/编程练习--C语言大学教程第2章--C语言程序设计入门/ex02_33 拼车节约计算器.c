#include <stdio.h>
int main(void)
{
	double zongmiles,youqianper,youxiaolv,tingche,guolu,endfee;
	printf("Please enter the total kilometers driven per day:\n");
	scanf("%lf",&zongmiles);
	printf("Please enter the cost per liter of gasoline:\n");
	scanf("%lf",&youqianper);
	printf("Please enter average kilometers per liter:\n");
	scanf("%lf",&youxiaolv);
	printf("Please enter the parking fees per day:\n");
	scanf("%lf",&tingche);
	printf("Please enter the tolls per day:\n");
	scanf("%lf",&guolu);
	endfee = ((zongmiles / youxiaolv) * youqianper) + tingche + guolu;
	printf("Your daily cost of driving to work is $%.2f\n",endfee);
	return 0;
}
