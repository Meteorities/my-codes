#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *from,*to;
	char ch;
	from = fopen("from.dat","r");
	to = fopen("to.dat","w");  
	if (from == NULL) {
		printf("canot find the file!\n");
		exit(0);
	}
	while ((ch = fgetc (from)) != EOF) {
		fputc(ch,to);
	} //������дwhile���������������Ƹ���from�ļ������ַ������������߼���Ϊ��-->д-->��-->д...ֱ��Դ�ļ�EOF 
	fclose (from);
	fclose (to);
	return 0;
} 
