#include <stdio.h>
#include <math.h>
int main(void)
{
	int passed = 0,failed = 0,check,i;
	for (i = 1;i <= 10;i++) {
		printf("Enter result ( 1=pass, 2=fail ):\n");
		scanf("%d",& check);
		if (check == 1) {
		passed++;
		}
		else if (check == 2) {
			failed++;
		}
	}
	printf("Passed %d\nFailed %d\n",passed,failed);
	if (passed > 8) {
		printf("Bonus to instructor!\n");
	}
	return 0;
}
