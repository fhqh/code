/*
-------------------------------------------------------------------------
��Ŀ�����乫˾���û�����������á�·��ԽԶ���˷�Խ�͡���׼���£�
		S    <  250				û���ۿ�
		250  <= S < 500		2%�ۿ�
		500  <= S < 1000		5%�ۿ�
		1000 <= S < 2000	8%�ۿ�
		2000 <= S < 3000	10%�ۿ�
		3000 <= S 			15%�ۿ� 
-------------------------------------------------------------------------
*/  
#include "stdio.h"

int main (void){
	float p, w, d, f;
	int c, s;
	printf ("please enter price, weight, discount:");
	scanf ("%f%f%d", &p, &w, &s);
	if (s >= 3000){
		c = 12;
	}
	else {
		c = s / 250;
	}
	switch (c){
		case 0: d = 0; break;
		case 1: d = 2; break;
		case 2:
		case 3: d = 5; break;
		case 4:
		case 5:
		case 6:
		case 7: d = 8; break;
		case 8:
		case 9:
		case 10:
		case 11: d = 10; break;
		case 12: d = 15; break;
	}
	f = p * w * s * (1 - d / 100);
	printf ("freight = %10.2f\n", f);
	
	return 0;
} 
/*
------------------------------------------------------------------------
��Dev�ն��������� 
please enter price, weight, discount:100 20 300
freight =  588000.00

--------------------------------
Process exited after 20.14 seconds with return value 0
�밴���������. . . 
------------------------------------------------------------------------
*/
