/*
---------------------------------- 
��Ŀ�������������еĽϴ�ֵ 
---------------------------------- 
*/
#include "stdio.h"

int main (void){
	int max (int x, int y);
	int a, b, c;
	scanf ("%d%d", &a, &b);
	c = max (a, b);
	printf ("max = %d\n", c);
	
	return 0;
}
//�����������еĽϴ��ߵ�max������
int max (int x, int y){
	int z;
	if (x > y){
		z = x;
	}
	else {
		z = y;
	}
	return (z);
} 
/*
--------------------------------------------------
��Dev�ն���������  
7 9
max = 9

--------------------------------
Process exited after 3.606 seconds with return value 0
�밴���������. . .
--------------------------------------------------
*/
