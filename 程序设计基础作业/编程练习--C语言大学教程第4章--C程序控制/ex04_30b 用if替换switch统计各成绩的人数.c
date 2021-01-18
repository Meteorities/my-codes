#include <stdio.h> //cd-gai
int main(void)
{
	char grade;
	unsigned int aCount = 0,bCount = 0,cCount = 0,dCount = 0,fCount = 0;
	printf( "Enter the letter grades.\n");
	printf( "Enter the EOF character to end input.\n");
	while ( ( grade = getchar() ) != EOF ) {
		if (grade == 'A' || grade == 'a') {
			++aCount;
			break;
		}
		if (grade == 'B' || grade == 'b') {
			++bCount;
			break;	
		}
		if (grade == 'C' || grade == 'c') {
			++cCount;
			break;	
		}
		if (grade == 'D' || grade == 'd') {
			++dCount;
			break;	
		}
		if (grade == 'F' || grade == 'f') {
			++fCount;
			break;	
		}
		if (grade == '\n' || grade == '\t' || grade == ' ') {
			break;	
		}
		if (grade != 'A' && grade != 'a' && grade != 'B' && grade != 'b' && grade != 'C' && grade != 'c' && grade != 'D' && grade != 'd' && grade != 'F' && grade != 'f' && grade != '\n' && grade != '\t' && grade != ' ') {
			printf("%s","Incorrect letter grade entered.");
			printf("Enter a new grade.\n" );
			break;
		}
	}
	printf("Totals for each letter grade are:\n");
	printf("A: %u\nB: %u\nC: %u\nD: %u\nF: %u\n",aCount,bCount,cCount,dCount,fCount);
	return 0;
}
