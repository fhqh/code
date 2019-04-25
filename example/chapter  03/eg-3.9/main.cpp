/*
---------------------------------------------------
题目：从键盘上输入BOY三个字符，然后把他们输出到屏幕。 
---------------------------------------------------
*/
#include "stdio.h"

int main (void){
	char a, b, c;
	a = getchar ();
	b = getchar ();
	c = getchar ();
	putchar (a);
	putchar (b);
	putchar (c);
	putchar ('\n');//9-16等价于18-21 
/*
putchar (getchar ());
putchar (getchar ());
putchar (getchar ());
printf ("\n");
*/ 
	
	return 0;
}
/*
------------------------------------------------------
在Dev终端输入结果： 
Boy
Boy

--------------------------------
Process exited after 10.59 seconds with return value 0
请按任意键继续. . . 
------------------------------------------------------
*/
