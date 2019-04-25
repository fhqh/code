/*
---------------------------------------------------------------------------
题目：输入一个大于3的整数n，判定它是否为素数。 
---------------------------------------------------------------------------
*/
#include "stdio.h"
#include "math.h"

int main (void){
	int i, n, k;
	printf ("please enter a integer number, n = ");
	scanf ("%d", &n);
	/*--------------------------------------------------------- 
	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;
			if (i < n)
				printf ("%d is not a prime number.\n", n);
			else 
				printf ("%d is a prime number.\n", n);
	--------------------------------------------------------*/
	k = sqrt (n);
	for (i = 2; i <= k; i++){
		if (n % i == 0){
			break;
		}
	}
	if (i < k){
		printf ("%d is not a prime number.\n", n);
	}
	else {
		printf ("%d is a prime number.\n", n);
	}
	
	return 0;
} 
/*
-------------------------------------------------------------------------
在Dev终端输入结果： 
please enter a integer number, n = ?32
32 is not a prime number.

--------------------------------
Process exited after 10.88 seconds with return value 0
请按任意键继续. . . 
-------------------------------------------------------------------------
*/
