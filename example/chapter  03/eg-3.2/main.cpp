/*
---------------------------------------------
��Ŀ��������Ϣ����1000Ԫ�����һ�ꡣ���ִ�Ǯ����
1.���ڣ�������Ϊr1
2.һ�궨�ڣ�������Ϊr2
3.�����ΰ��궨�ڣ�������Ϊr3
�ֱ�����3�з����õ��ı�Ϣ֮�� 
---------------------------------------------
*/
#include "stdio.h"

int main (void){
	float p0 = 1000, r1 = 0.0036, r2 = 0.0225, r3 = 0.01988, p1, p2, p3;	
	p1 = p0 * (1 + r1);
	p2 = p0 * (1 + r2);
	p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
	printf ("p1 = %f\np2 = %f\np3 = %f\n", p1, p2, p3);
	
	return 0;
} 
/*
------------------------------------------------
��Dev�ն��������� 
p1 = 1003.599976
p2 = 1022.500061
p3 = 1019.978821

--------------------------------
Process exited after 3.238 seconds with return value 0
�밴���������. . . 
------------------------------------------------
*/