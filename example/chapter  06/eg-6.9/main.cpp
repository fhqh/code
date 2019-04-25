/*
-------------------------------------------------------------------------
题目：有三个字符串，要求找到其中最大的。 
-------------------------------------------------------------------------
*/
#include "stdio.h"
#include "string.h"

int main (void){
	int i;
	char str[3][20];
	char string[20];
	for (i = 0;	i < 3; i++){
		gets (str[i]);
	}
	if (strcmp (str[0], str[1]) > 0){
		strcpy (string, str[0]);
	}
	else {
		strcpy (string, str[1]);
	}
	if (strcmp (str[2], string) > 0){
		strcpy (string, str[2]);
	}
	printf ("\nthe largest string is :\n%s\n", string);
	
	return 0;
} 
/*
-------------------------------------------------------------------------
在Dev终端输入结果： 
China
America
Hollands

the largest string is :
Hollands

--------------------------------
Process exited after 39.76 seconds with return value 0
请按任意键继续. . .
-------------------------------------------------------------------------
*/
