/*
--------------------------------------------------------------------------
题目：用switch语句处理菜单命令。例如：输入A或a字符，就执行A操作。 
--------------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	void action1 (int, int), action2 (int, int);
	char ch;
	int a = 15, b = 23;
	ch = getchar();
	switch (ch){
		case 'a' :
		case 'A' : action1 (a, b); break;
		case 'b' :
		case 'B' : action1 (a, b); break;
		default : putchar ('\a');
	}
	return 0;
}
void action1 (int x, int y){
	printf ("x + y = %d\n", x + y);
}
void action2 (int x, int y){
	printf ("x * y = %d\n", x * y);
}
/*-----------------------------------------------------------------------
在Dev终端输入结果： 
a
x + y = 38

--------------------------------
Process exited after 3.297 seconds with return value 0
请按任意键继续. . . 
-----------------------------------------------------------------------*/
