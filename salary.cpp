#include <stdio.h>
int main()
{
	const double RATE = 8.25;
	const int STANDARD = 40;
	double pay;
	int hours;
	
	printf("�����빤��Сʱ��:"); 
	scanf("%d", &hours);
	if(hours > STANDARD)
		pay = STANDARD * RATE + (hours - STANDARD) * RATE * 1.5; 
	else
		pay = hours * RATE;
	printf("Ӧ�����ʣ�%f\n", pay); //����Ҫ�ø����� %f��ʽ 
	return 0;
}
