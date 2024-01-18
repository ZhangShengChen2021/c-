#include <stdio.h>
int isPrime(int x);

int main()
{
	int x = -1;
	scanf("%d", &x);
	if( isPrime(x) ){
		printf("%d是素数\n", x);
	}else{
		printf("%d不是素数\n", x);
	}
	return 0;
}

int isPrime(int x)
{
	int i;
	int ret = 1;
	if( i == 1 || ( x!=2 && x%2 == 0 )){
		ret = 0;
	}
	for( i=3; i<x; i+=2){
		if( x % i == 0){
			ret = 0;
			break;
		}
	}
	
	return ret;
}
