#include <stdio.h>
int search(int key, int a[],int length);
int main(void)
{
	int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32,};
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d", &x);
	loc = search(x, a, sizeof(a)/sizeof(a[0]));
	if( loc != -1){
		printf("%d在第%d个位置上\n", x, loc);
	}else{
		printf("%d不存在\n", x);
	}
	
	return 0;
 } 
 
 int search(int key, int a[],int length)//当数组作为参数被传到函数里时，还要一个参数 length来传数组的大小，不然这个函数没法计算 
 {
 	int ret = -1;
 	int i;
 	for( i=0; i<length; i++){
 		if( a[i] == key ){
 			ret = i;
 			break;
		 }
	 }
	 return ret;
 }
