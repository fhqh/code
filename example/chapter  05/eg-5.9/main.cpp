/*
---------------------------------------------------------------------------
��Ŀ������һ������3������n���ж����Ƿ�Ϊ������ 
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
��Dev�ն��������� 
please enter a integer number, n = ?32
32 is not a prime number.

--------------------------------
Process exited after 10.88 seconds with return value 0
�밴���������. . . 
-------------------------------------------------------------------------
*/
