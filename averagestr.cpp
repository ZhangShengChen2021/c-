#include <stdio.h>
int main()
{
	int x;
	double sum = 0;
	int cnt =0;
	int number[100];	//定义数组 
	scanf("%d", &x);
	while(x != -1){
		number[cnt] = x;	// 对数组中的元素赋值，将x的值存到number第cnt个位置上 
		sum += x;
		cnt ++;
		scanf("%d", &x);
	} 
	if(cnt >0){
		printf("平均值为%f\n", sum/cnt);
		int i;
		for( i=0; i<cnt; i++ ){			//整个for循环就是在从0到cnt遍历这个数组 
			if(number[i] > sum/cnt){	//拿number中的第i个元素做判断 
				printf("%d 比平均数大\n", number[i] );
			}
		}
	}
	return 0;
 } 
