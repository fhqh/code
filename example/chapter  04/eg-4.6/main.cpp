/*
-----------------------------------------------------------------------
题目：要求按考试成绩等级输出百分制数段：
								A : 85以上
								B : 70 ~ 85 
								C : 60 ~ 69
								D : 60分以下 
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
