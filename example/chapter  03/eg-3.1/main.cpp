/*
------------------------------------------
��Ŀ���������¶�64Fת��Ϊ���϶�
��ʽ��c=5/9(f-32) 
------------------------------------------
*/
#include "stdio.h" 

int main (void){
	float f, c;
	f = 64.0;
	c = (5.0 / 9) * (f - 32);
	printf ("f = %f\nc = %f\n", f, c);
	
	return 0;
}
/*
----------------------------------------------
��Dev�ն��������� 
f = 64.000000
c = 17.777779

--------------------------------
Process exited after 0.3088 seconds with return value 0
�밴���������. . . 
----------------------------------------------
*/