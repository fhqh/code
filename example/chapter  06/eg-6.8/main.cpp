/*
-------------------------------------------------------------------------
��Ŀ������һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ����� 
-------------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	char string[81];
	int i, num = 0, word = 0;
	char c;
	gets (string);
	for (i = 0; (c = string[i]) != '\0'; i++){
		if (c ==' '){
			word = 0;
		}
		else if (word == 0){
			word = 1;
			num++;
		}
	}
	printf ("There are %d words in this line.\n", num);
	
	return 0;
} 
/*
-------------------------------------------------------------------------
��Dev�ն��������� 
I am a lucky dog.
There are 5 words in this line.
--------------------------------
Process exited after 62.83 seconds with return value 0
�밴���������. . .
-------------------------------------------------------------------------
*/
