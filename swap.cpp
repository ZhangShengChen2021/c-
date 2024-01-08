#include <stdio.h>
int main()
{
	int a=5;
	int b=6;
	int t;
	t=a;	// 将a的值先储存到t中 
	a=b;
	b=t;
	printf("a=%d b=%d",a,b);
	return 0;
}
