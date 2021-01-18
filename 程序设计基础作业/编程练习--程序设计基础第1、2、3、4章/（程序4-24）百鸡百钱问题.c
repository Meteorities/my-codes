#include <stdio.h>
#include <math.h>
int main(void)
{
	int m,n,cocks,hens,chicks;
	scanf("%d%d",&m,&n);
	for (cocks = 0;cocks <= m / 3;cocks++) {
		for (hens = 0;hens <= m / 2;hens++) {
			for (chicks = 0;chicks <= m;chicks++) {
				if (cocks + hens + chicks == n && 3 * cocks + hens * 2 + (chicks / 3) == m && chicks % 3 == 0) {
					printf("Cocks:%d, Hens:%d, Chicks:%d\n",cocks,hens,chicks);
				}
			}
		}
	}
	if (m < n / 3) {
		printf("No Solution!\n");
	}
	return 0;
}
