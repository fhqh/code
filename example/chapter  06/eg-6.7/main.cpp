/*
-------------------------------------------------------------------------
��Ŀ�����һ������ͼ���� 
-------------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	char diamond[][5] = {{' ', ' ', '*'}, {' ', '*', ' ', '*'},
		{'*',' ', ' ', ' ', '*'}, {' ', '*', ' ', '*'}, {' ', ' ', '*'}};
	int i, j;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf ("%c", diamond[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
} 
/*
-------------------------------------------------------------------------
��Dev�ն��������� 
  *
 * *
*   *
 * *
  *

--------------------------------
Process exited after 0.06631 seconds with return value 0
�밴���������. . .
-------------------------------------------------------------------------
*/