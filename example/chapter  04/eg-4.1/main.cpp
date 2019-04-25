/*
---------------------------------------------------
题目：按要求解ax^2+bx+c=0，输入a，b，c的值。 
---------------------------------------------------
*/ 
#include "stdio.h"
#include "math.h"

int main (void){
	double a, b, c, disc, x1, x2, p, q;
	scanf ("%lf%lf%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	if (disc < 0){
		printf ("This equation hasn't real roots\n");
	}	
	else{
		p = -b / (2.0 * a);
		q = sqrt (disc) / (2.0 * a);
		x1 = p + q;
		x2 = p - q;
		printf ("real root:\n");
		printf ("x1 = %7.2f\nx2 = %7.2f\n", x1, x2);
	}	
	
	return 0;
}
/*
-------------------------------------------------------
在Dev终端输入结果： 
6 3 1
This equation hasn't real roots

--------------------------------
Process exited after 11.33 seconds with return value 0
请按任意键继续. . .
2 4 1
real root:
x1 =   -0.29
x2 =   -1.71

--------------------------------
Process exited after 4.549 seconds with return value 0
请按任意键继续. . . 
-------------------------------------------------------
*/ 
