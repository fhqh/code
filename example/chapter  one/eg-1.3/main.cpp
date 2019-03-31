/*
---------------------------------- 
题目：求俩个整数中的较大值 
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
//求俩个整数中的较大者的max函数。
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
在Dev终端输入结果：  
7 9
max = 9

--------------------------------
Process exited after 3.606 seconds with return value 0
请按任意键继续. . .
--------------------------------------------------
*/
