#include <stdio.h>
#include <string.h> //����strcat 
int main(void)
{
	char str1 [100],str2 [100];
	int i,length;
	gets (str1);
	gets (str2);
	if (strlen (str2) > 5) {
		length = strlen (str1);
		for (i = 0;i < 5;i++) {
			str1 [length + i] = str2 [i];
		}
		str1 [length + i] = '\0'; //�ؼ�����䣡�����������һЩ���룡����Ϊû����'\0'�� 
		printf("%s",str1);
	} 
	else if (strlen (str2) < 5 || strlen (str2) == 5) {
		printf("%s%s\n",str1,str2);
	}
	return 0;
}
