#include <stdio.h>
int main(void)
{
	int coa = 0,cob = 0,coc = 0,cod = 0,cof = 0;
	char grade;
	printf("%s","Enter the letter grades.\n");
	printf("%s","Enter the EOF character to end input.\n");
	while (scanf("%c",& grade) != EOF) {
		getchar(); 
		switch (grade)
	{
		case 'a':{
			coa += 1;
			break;
		}
		case 'A':{
			coa += 1;
			break;
		}
		case 'b':{
			cob += 1;
			break;
		}
		case 'B':{
			cob += 1;
			break;
		}
		case 'c':{
			coc += 1;
			break;
		}
		case 'C':{
			coc += 1;
			break;
		}
		case 'd':{
			cod += 1;
			break;
		}
		case 'D':{
			cod += 1;
			break;
		}
		case 'f':{
			cof += 1;
			break;
		}
		case 'F':{
			cof += 1;
			break;
		}
		default:{
			printf("%s\n","Incorrect letter grade entered. Enter a new grade.");
			getchar();
			break; 
		}
	}
	}
	if (scanf("%c",& grade) == EOF) {
		printf("%s\n","Totals for each letter grade are:");
		printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d\n",coa,cob,coc,cod,cof);
		getchar();
	}
	return 0;
}
