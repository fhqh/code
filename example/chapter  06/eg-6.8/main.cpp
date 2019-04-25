/*
-------------------------------------------------------------------------
题目：输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。 
-------------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	char string[81];
	int i, num = 0, word = 0;
	char c;
	gets (string);
	for (i = 0; (c = string[i]) != '\0'; i++){
		if (c ==' '){
			word = 0;
		}
		else if (word == 0){
			word = 1;
			num++;
		}
	}
	printf ("There are %d words in this line.\n", num);
	
	return 0;
} 
/*
-------------------------------------------------------------------------
在Dev终端输入结果： 
I am a lucky dog.
There are 5 words in this line.
--------------------------------
Process exited after 62.83 seconds with return value 0
请按任意键继续. . .
-------------------------------------------------------------------------
*/
