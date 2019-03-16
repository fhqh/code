/*
目的:探究 \0 的作用。 
*/
#include "stdio.h"

int main (void){
	int i, j;
	char a[] = {"China\0is\0very\0intersting."};
	char c[] = {"China is very intersting."};
	for (i = 0; i < 30; i++)
		printf ("%c", a[i]);
	printf ("\n");
		for (j = 0; j < 30; j++)
			printf ("%c", c[j]);
			
	return 0;
}
/*
-----------------------------------------
在Dev终端输入结果： 
China is very intersting.
China is very intersting.
结论：\0相当于 空格 
--------------------------------
Process exited after 0.1487 seconds with return value 0
请按任意键继续. . . 
-----------------------------------------
*/
