#include <stdio.h>
int main()
{
	int x;
	x = 12;
	//scanf("%d",&x);
	int i;
	int isPrime = 1;
	
	for (i=2; i<x; i++){
		if(x % i == 0){
			isPrime = 0;
			break;
		}
	} 
	if( isPrime == 1){
		printf("������\n");
	}else{
		printf("��������\n");
	}
	return 0;
}
