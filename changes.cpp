#include <stdio.h>
int main(){
	//��ʼ��
	int bill = 0;
	int price = 0;
	
	//����Ʊ��ͽ��
	printf("�������"); 
	scanf("%d", &price);
	printf("������Ʊ�棺");
	scanf("%d", &bill);
	//�������� 
	if(bill >= price){
		printf("Ӧ����%dԪ��", bill - price);
	} 
	else{
		printf("����Ǯ����\n");
	}
	
	return 0;
}
