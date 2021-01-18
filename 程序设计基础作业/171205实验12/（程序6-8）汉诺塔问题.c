#include <stdio.h>
void hanoi (int n,char a,char b,char c);
void move (int i,char from,char to);
void hanoi (int n,char a,char b,char c) {
	if (n == 1) {
		move (n,a,b);
	}
	if (n > 1) { //CORE!
		hanoi (n - 1,a,c,b);
		move (n,a,b); //"move" not "hanoi"
		hanoi (n - 1,c,b,a);
	}
}
void move (int i,char from,char to) {
	printf("Move %d : from %c to %c\n",i,from,to);
}
int main(void)
{
	int n;
	scanf("%d",& n);
	hanoi (n,'A','B','C');
	return 0;
} 
