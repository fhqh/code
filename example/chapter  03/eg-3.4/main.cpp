/*
------------------------------------------
��Ŀ�����������ε����߳���������������� 
------------------------------------------
*/
#include "stdio.h"
#include "math.h"

int main (void){
	double a, b, c, s , area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a + b + c) / 2;
	area = sqrt (s * (s - a) * (s - b) * (s - c));
	printf ("a = %f\tb = %f\t %f\n", a, b, c);
	printf ("area = %f\n", area);
	
	return 0; 
} 
/*
------------------------------------------------------------- 
��Dev�ն��������� 
a = 3.670000    b = 5.430000     6.210000
area = 9.903431

--------------------------------
Process exited after 0.2785 seconds with return value 0
�밴���������. . . 
------------------------------------------------------------- 
*/