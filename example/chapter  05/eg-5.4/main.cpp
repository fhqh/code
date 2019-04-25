/*
--------------------------------------------------------------------------
题目：在全系1000名学生中举行慈善募集，当总数达到10万元是就停止，统计此时
捐款的人数和平均每人捐款的数目。 
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
在Dev终端输入结果： 
please enter amout:12000
please enter amout:23324
please enter amout:3445
please enter amout:43534
please enter amout:435435
num = 4
aver =  129434.50
--------------------------------
Process exited after 26.13 seconds with return value 0
请按任意键继续. . .
-------------------------------------------------------------------------
*/
