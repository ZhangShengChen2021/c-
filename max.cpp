#include <stdio.h>
int main()
{
	int a,b;
	
	printf("��������������:");
	scanf("%d %d", &a, &b);
	int max = b;
	if(a > b){
		max = a;
	}
	printf("����Ǹ���%d\n", max);
	
	return 0;
}