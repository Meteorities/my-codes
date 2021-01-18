#include <stdio.h> //cd
int main(void)
{
	char grade;
	unsigned int aCount = 0,bCount = 0,cCount = 0,dCount = 0,fCount = 0;
	printf( "Enter the letter grades.\n");
	printf( "Enter the EOF character to end input.\n");
	while ( ( grade = getchar() ) != EOF ) {
		switch ( grade ) {
			case 'A':
			case 'a':
				++aCount;
				break;

			case 'B':
			case 'b':
				++bCount;
				break;

			case 'C':
			case 'c':
				++cCount;
				break;

			case 'D':
			case 'd':
				++dCount;
				break;

			case 'F':
			case 'f':
				++fCount;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				printf( "%s", "Incorrect letter grade entered." );
				printf( " Enter a new grade.\n" );
				break;
}
}
	printf( "Totals for each letter grade are:\n" );
	printf( "A: %u\n", aCount );
	printf( "B: %u\n", bCount );
	printf( "C: %u\n", cCount );
	printf( "D: %u\n", dCount );
	printf( "F: %u\n", fCount );
	return 0;
}
