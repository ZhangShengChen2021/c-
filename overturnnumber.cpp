#include <stdio.h>
int main()
{
	int x;
//	scanf("%d", &x);
	x=700;
	int digit;
	int ret = 0;
	
	while( x > 0 ){
	digit = x%10;
	printf("%d", digit);
	ret = ret*10 + digit;
//	printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);  //�����Ϊһ���µ�����������������д��һ�� 
	x /= 10 ;
}
//	printf("%d",ret);
	return 0;
}