#include <stdio.h>
// 1+1/2+1/3+1/4+...+1/n 
int main()
{
	int n;
	int i;
	double sum = 0.0;//�����1-1/2+1/3-1/4+...�����ټ�һ��int sign = 1�� 
	
//	scanf("%d", &n);
	n = 10;
	for ( i = 1; i<=n; i++){
		sum += 1.0/i;
		//�����1-1/2+1/3-1/4+...������forѭ���м�һ�� sign=-sign�� 
		//��sum += sign*1.0/i�� 
	}
	
	printf("f(%d)=%f\n", n, sum);
	
	return 0;
}
