/*
-------------------------------------------------------------------------
题目：输出一个菱形图案。 
-------------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	char diamond[][5] = {{' ', ' ', '*'}, {' ', '*', ' ', '*'},
		{'*',' ', ' ', ' ', '*'}, {' ', '*', ' ', '*'}, {' ', ' ', '*'}};
	int i, j;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf ("%c", diamond[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
} 
/*
-------------------------------------------------------------------------
在Dev终端输入结果： 
  *
 * *
*   *
 * *
  *

--------------------------------
Process exited after 0.06631 seconds with return value 0
请按任意键继续. . .
-------------------------------------------------------------------------
*/
