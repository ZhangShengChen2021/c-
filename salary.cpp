#include <stdio.h>
int main()
{
	const double RATE = 8.25;
	const int STANDARD = 40;
	double pay;
	int hours;
	
	printf("请输入工作小时数:"); 
	scanf("%d", &hours);
	if(hours > STANDARD)
		pay = STANDARD * RATE + (hours - STANDARD) * RATE * 1.5; 
	else
		pay = hours * RATE;
	printf("应付工资：%f\n", pay); //这里要用浮点数 %f形式 
	return 0;
}
