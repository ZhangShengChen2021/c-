#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
// ������Ϸ 

int main()
{
	srand(time(0));
	int number = rand()%100+1;		//ÿ���ٻ�rand�����õ�һ��������� 
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100������");
	do{
		printf("������1��100������"); 
		scanf("%d", &a);
		count ++;
		if( a > number ){
			printf("��µ�������...");
		}else{
			printf("��µ���С��...");
		} 
	}while( a != number);
	
		printf("̫���ˣ�����%d�ξͲµ��˴𰸣�\n", count);
		
	return 0; 
		
	} 

