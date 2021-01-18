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
	} //不这样写while条件将导致无限制复制from文件的首字符！改完后程序逻辑变为读-->写-->读-->写...直至源文件EOF 
	fclose (from);
	fclose (to);
	return 0;
} 
