/*
Ŀ��:̽�� \0 �����á� 
*/
#include "stdio.h"

int main (void){
	int i, j;
	char a[] = {"China\0is\0very\0intersting."};
	char c[] = {"China is very intersting."};
	for (i = 0; i < 30; i++)
		printf ("%c", a[i]);
	printf ("\n");
		for (j = 0; j < 30; j++)
			printf ("%c", c[j]);
			
	return 0;
}
/*
-----------------------------------------
��Dev�ն��������� 
China is very intersting.
China is very intersting.
���ۣ�\0�൱�� �ո� 
--------------------------------
Process exited after 0.1487 seconds with return value 0
�밴���������. . . 
-----------------------------------------
*/
