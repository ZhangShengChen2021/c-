#include <stdio.h>
// 求平均值 单一输入 
int main()
{
	int number;
	int sum= 0 ;
	int count = 0;
	
	scanf("%d", &number);
	while( number != -1){
		sum += number;
		count ++; // while里面别忘了计数！ 
		scanf("%d", &number);
	}
	
	printf("%f\n", 1.0*sum/count);
	
	return 0;
}
