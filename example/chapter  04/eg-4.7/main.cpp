/*
--------------------------------------------------------------------------
��Ŀ����switch��䴦��˵�������磺����A��a�ַ�����ִ��A������ 
--------------------------------------------------------------------------
*/
#include "stdio.h"

int main (void){
	void action1 (int, int), action2 (int, int);
	char ch;
	int a = 15, b = 23;
	ch = getchar();
	switch (ch){
		case 'a' :
		case 'A' : action1 (a, b); break;
		case 'b' :
		case 'B' : action1 (a, b); break;
		default : putchar ('\a');
	}
	return 0;
}
void action1 (int x, int y){
	printf ("x + y = %d\n", x + y);
}
void action2 (int x, int y){
	printf ("x * y = %d\n", x * y);
}
/*-----------------------------------------------------------------------
��Dev�ն��������� 
a
x + y = 38

--------------------------------
Process exited after 3.297 seconds with return value 0
�밴���������. . . 
-----------------------------------------------------------------------*/
