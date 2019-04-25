/*
-------------------------------------------------------------------------
��Ŀ�������鴦��Fibonacci�������⡣ֻ���ǰ20�� 
-------------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	int i;
	int f[20] = {1, 1};
	for (i = 2; i < 20; i++){
		f[i] = f[i - 2] + f[i - 1];
	}
	for (i = 0; i < 20; i++){
		if (i % 5 == 0){
			printf ("\n");	
		}
		printf ("%12d", f[i]);
	}
	printf ("\n");
	
	return 0;
} 

/*
-------------------------------------------------------------------------
��Dev�ն��������� 
           1           1           2           3           5
           8          13          21          34          55
          89         144         233         377         610
         987        1597        2584        4181        6765

--------------------------------
Process exited after 0.6106 seconds with return value 0
�밴���������. . . 
-------------------------------------------------------------------------
*/