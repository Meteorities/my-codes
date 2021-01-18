#include<stdio.h> //cd
int main(void)
{
	int i = 2,n;
	scanf("%d",&n);
	while(i < n) {
		if(n % i == 0) {
			break;
		}
		i++;
	}
	if(i == n) {
		printf("Yes!\n",n);
	}
	else {
		printf("No!\n",n);	
	}
	return 0;
}
