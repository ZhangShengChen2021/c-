#include <stdio.h>
void cheer(int i)
{
	printf("cheer %d\n",i);
}

int main()
{
	cheer(2.0);//传统c语言调用函数时给的值与参数类型不匹配是最大的漏洞 
	
	return 0;
}
