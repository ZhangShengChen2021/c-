#include <stdio.h>
int main(void)
{
	const int number = 10; 	//�����С 
	int x;
	int count[number];		//�������� 
	
	//��ʼ�������ر�������������������Զ��õ�Ĭ�ϳ�ʼֵ����һ��ʹ��ǰ��س�ʼ���������ʼ��Ҫ��ѭ������ÿһ��Ԫ��	 
	for(i=0; i<number; i++){
		count[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1){
		if(x>=0 && x<=9){
			count[x] ++;	//����������� 
		}
		scanf("%d", &x);
	}
	for( i=1; i<10; i++){  	//������������� 
		printf("%d:%d\n", i, count[i]);
	}
	return 0;
}
