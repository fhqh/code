/*
-----------------------------------------------------------------------
��Ŀ��Ҫ�󰴿��Գɼ��ȼ�����ٷ������Σ�
								A : 85����
								B : 70 ~ 85 
								C : 60 ~ 69
								D : 60������ 
-----------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	char grade;
	scanf ("%c", &grade);
	prinrf ("input your score:");
	switch (grade){
		case 'A':
			printf ("85 ~ 100\n");
			break;
		case 'B':
			printf ("70 ~ 84\n");
			break;
		case 'C':
			printf ("60 ~ 69\n");
			break;
		case 'D':
			printf ("0 ~ 59\n");
			break;	
		default:
			printf ("enter data error!\n");			
	}
	
	return 0;
} 
