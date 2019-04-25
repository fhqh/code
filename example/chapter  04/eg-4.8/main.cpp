/*
--------------------------------------------------------------------------
题目：判断是否为闰年。 
--------------------------------------------------------------------------
*/ 
#include "stdio.h"

int main (void){
	int year, leap;
	printf ("enter years:");
	scanf ("%d", &year);
	if (year % 4 == 0){
		if (year % 100 == 0){
			if (year % 400 == 0)
				leap = 1;
			else
				leap = 0;
		}
		else
			leap = 1;
	}
	else{
		leap = 0;
	}
	if (leap){
		printf ("%d is ", year);
	}
	else{
		printf ("%d is not", year);
	}
	printf ("a leap year.\n");
	
	return 0;
}
/*
-----------------------------------------------------------------------
在Dev终端输入结果： 
enter years:2343
2343 is nota leap year.

--------------------------------
Process exited after 2.407 seconds with return value 0
请按任意键继续. . . 
-----------------------------------------------------------------------
*/
