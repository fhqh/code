#include <stdio.h>
#include <stdlib.h>   //NULL��rand�й� 
#include <time.h>    //�õ���time����
int main(){
	int i, j, t, a[10], nums, n;
	srand ((unsigned) time(NULL)); //**��ʱ�����֣�ÿ�β����������һ��
   for (n = 0; n < 10; n++){		//���ʮ��������� 
     a[n] = rand();
     printf ("%d ", a[n]);
   }   
	//for (i = 0; i <= 10; i++)
		//scanf ("%d", & a[i]); 
	//printf ("����10������,�м��Կո����:");
	//scanf ("%d%d%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]); 
	printf ("\n");
	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 10; j++) 
   			if (a[j] < a[i]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		printf("����������: ");
		for(i=0; i<10; i++)
  			printf("%d ",a[i]);
			printf("\n");
	return 0;
}

