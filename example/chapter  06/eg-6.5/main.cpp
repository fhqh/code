/*
-------------------------------------------------------------------------
��Ŀ����һ��3*4�ľ���Ҫ����������ֵ�������ڵ��������� 
-------------------------------------------------------------------------
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main (void){
	int i, j, row = 0, colum = 0, max;
	int a[3][4];
	srand ((unsigned) time (NULL));
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			a[i][j] = rand() % 100;
			printf ("%d\t", a[i][j]);
		}
		printf ("\n");	
	}
	max = a[0][0];
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			if (a[i][j] > max){
				max = a[i][j];
				row = i + 1;
				colum = j + 1;
			}
		}	
	}	
	printf ("\n");
	printf ("max = %d\nrow = %d\ncolum = %d\n", max, row, colum);
	
	return 0;
		
} 
/*
-------------------------------------------------------------------------
��Dev�ն��������� 
20      5       42      27
40      47      4       86
13      45      18      46

max = 86
row = 2
colum = 4

--------------------------------
Process exited after 0.305 seconds with return value 0
�밴���������. . . 
-------------------------------------------------------------------------
*/ 
