/*
-------------------------------------------------------------------------
题目：运输公司对用户计算运输费用。路程越远，运费越低。标准如下：
		S    <  250				没有折扣
		250  <= S < 500		2%折扣
		500  <= S < 1000		5%折扣
		1000 <= S < 2000	8%折扣
		2000 <= S < 3000	10%折扣
		3000 <= S 			15%折扣 
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
在Dev终端输入结果： 
please enter price, weight, discount:100 20 300
freight =  588000.00

--------------------------------
Process exited after 20.14 seconds with return value 0
请按任意键继续. . . 
------------------------------------------------------------------------
*/
