#include <stdio.h>
int main()
{
	int a ,b;
	double c =(a+b)/2.0; //除以“2”没有小数部分 所以用“/2.0”，得到一个double类型的结果，储存到 double c里面去 
	
	scanf("%d %d",&a,&b);
	
	printf("%d和%d的平均值=%f\n", a, b, c);
	
	return 0;
}
