#include <stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;		
//	��������int�������������ֻȡ�������ֵ��ص㣨ȡ��%�õ��� 
	
	scanf("%d %d",&hour1, &minute1);
	scanf("%d %d",&hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;   
//  ͬ����ʱ�䣨60���ƣ���Ӣ��Ӣ�磨12���ƣ����������ý��ƻ���ת��Ϊʮ���ƽ��м��� 
	
	int t = t2 - t1;
	
	printf("ʱ�����%dСʱ%d��",t/60, t%60);	// t/60 ->Сʱ����  t%60 ->���Ӳ��� 
	return 0;
	
}
