/*
-------------------------------------------------------------------------
��Ŀ���Ƚ�do...while...��whileѭ���� 
-------------------------------------------------------------------------
*/ 
#include "stdio.h"

int main (void){
	int i, j, sum = 0, num = 0;
	printf ("please enter i , i = ?");
	scanf ("%d", &i);
	while (i <= 10){
		sum = sum + i;
		i++;
	}
	printf ("sum = %d\n", sum);
	printf ("please enter j , j = !");
	scanf ("%d", &j);
	do{
		num = num + j;
		j++;
	}
	while (i <= 10);
	printf ("num = %d\n", num);
	
	return 0;
} 
/*
------------------------------------------------------------------------
��Dev�ն��������� 
please enter i , i = ?11
sum = 0
please enter j , j = !11
num = 11
--------------------------------
Process exited after 5.457 seconds with return value 0
�밴���������. . . 
------------------------------------------------------------------------
*/
