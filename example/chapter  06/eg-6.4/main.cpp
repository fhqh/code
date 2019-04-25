/*
-------------------------------------------------------------------------
题目：将一个二维数组的行列的元素进行互换。 
-------------------------------------------------------------------------
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h" 

int main (void){
	int a[2][3], b[3][2];
	int i, j;
	srand ((unsigned) time (NULL));
	printf ("array a: \n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			a[i][j] = rand() % 100;
			printf ("%d\t", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf ("\n");
	}
	printf ("array b: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf ("%d\t", b[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
} 
/*
-------------------------------------------------------------------------
在Dev终端输入结果： 
array a:
41      6       90
0       26      84
array b:
41      0
6       26
90      84

--------------------------------
Process exited after 0.5482 seconds with return value 0
请按任意键继续. . . 
-------------------------------------------------------------------------
*/
