/*
--------------------------------------------------------------------------
��Ŀ����ȫϵ1000��ѧ���о��д���ļ�����������ﵽ10��Ԫ�Ǿ�ֹͣ��ͳ�ƴ�ʱ
����������ƽ��ÿ�˾�����Ŀ�� 
--------------------------------------------------------------------------
*/ 
#include "stdio.h"
#define SUM 100000

int main (void){
	float amount, aver, total;
	int i;
	for (i = 0, total = 0; i <= 1000; i++){
		printf ("please enter amout:");
		scanf ("%f", &amount);
		total = total + amount;
		if (total >= SUM){
			break;
		}
	}
	aver = total / i;
	printf ("num = %d\naver = %10.2f\n", i, aver);
	
	return 0;
} 
/*
-------------------------------------------------------------------------
��Dev�ն��������� 
please enter amout:12000
please enter amout:23324
please enter amout:3445
please enter amout:43534
please enter amout:435435
num = 4
aver =  129434.50
--------------------------------
Process exited after 26.13 seconds with return value 0
�밴���������. . .
-------------------------------------------------------------------------
*/
