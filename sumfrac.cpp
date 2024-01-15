#include <stdio.h>
// 1+1/2+1/3+1/4+...+1/n 
int main()
{
	int n;
	int i;
	double sum = 0.0;//如果是1-1/2+1/3-1/4+...可以再加一个int sign = 1； 
	
//	scanf("%d", &n);
	n = 10;
	for ( i = 1; i<=n; i++){
		sum += 1.0/i;
		//如果是1-1/2+1/3-1/4+...可以在for循环中加一个 sign=-sign； 
		//且sum += sign*1.0/i； 
	}
	
	printf("f(%d)=%f\n", n, sum);
	
	return 0;
}
