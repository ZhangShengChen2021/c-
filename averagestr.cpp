#include <stdio.h>
int main()
{
	int x;
	double sum = 0;
	int cnt =0;
	int number[100];	//�������� 
	scanf("%d", &x);
	while(x != -1){
		number[cnt] = x;	// �������е�Ԫ�ظ�ֵ����x��ֵ�浽number��cnt��λ���� 
		sum += x;
		cnt ++;
		scanf("%d", &x);
	} 
	if(cnt >0){
		printf("ƽ��ֵΪ%f\n", sum/cnt);
		int i;
		for( i=0; i<cnt; i++ ){			//����forѭ�������ڴ�0��cnt����������� 
			if(number[i] > sum/cnt){	//��number�еĵ�i��Ԫ�����ж� 
				printf("%d ��ƽ������\n", number[i] );
			}
		}
	}
	return 0;
 } 
