#include <stdio.h>
int main(void)
{
	int i = 0;
	int p; 
	printf("%p\n", &i);
	printf("%p\n", &p);//本地变量 在内存中紧挨着的 
	
	return 0;
} 


