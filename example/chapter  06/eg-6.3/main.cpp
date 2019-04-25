/*
-------------------------------------------------------------------------
题目：有十个数字按从小到大顺序排列。 
-------------------------------------------------------------------------
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main (void){
	int a[10];
	int i, j, t;
	printf ("inpur 10 nums: ");
	srand ((unsigned) time (NULL));
	for (i = 0; i < 10; i++){
		a[i] = rand() % 100;
		printf ("%d\t", a[i]);
	}
	printf ("\n");
	for (j = 0; j < 9; j++)
		for (i = 0; i < 9 - j; i++)
			if (a[i] > a[i + 1]){
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	printf ("thr sorted numbers: ");
	for (i = 0; i < 10; i++)
		printf ("%d\t", a[i]);
	printf ("\n");
	
	return 0;
} 
/*
-------------------------------------------------------------------------
在Dev终端输入结果： 
inpur 10 nums: 6        0       30      33      2       7       31      16      93      91
thr sorted numbers: 0   2       6       7       16      30      31      33      91      93

--------------------------------
Process exited after 0.5059 seconds with return value 0
请按任意键继续. . . 
-------------------------------------------------------------------------
*/
