#include <stdio.h>
int main(void)
{
	const int number = 10; 	//数组大小 
	int x;
	int count[number];		//定义数组 
	
	//初始化，本地变量（数组变量）不能自动得到默认初始值，第一次使用前务必初始化，数组初始化要用循环遍历每一个元素	 
	for(i=0; i<number; i++){
		count[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1){
		if(x>=0 && x<=9){
			count[x] ++;	//数组参与运算 
		}
		scanf("%d", &x);
	}
	for( i=1; i<10; i++){  	//遍历数组做输出 
		printf("%d:%d\n", i, count[i]);
	}
	return 0;
}
