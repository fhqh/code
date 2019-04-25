/*
--------------------------------------------------------------------------
题目：用公式3.1415926...=1-1/3+1/5-1/7+...求3.1415...的近似值，直到发现
某一项绝对值小于10^-6为止。 
--------------------------------------------------------------------------
*/
#include "stdio.h"
#include "math.h"

int main (void){
	int sign = 1;
	double pi = 0.0, n = 1.0, term = 1.0;
	while (fabs (term) >= 10 ^ -6){  //fabs 是求绝对值的函数 
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
	}
	pi = pi * 4;
	printf ("pi = %10.8f\n", pi);
	
	return 0;
} 
/*
------------------------------------------------------------------------
在Dev终端输入结果： 
 
------------------------------------------------------------------------
*/
