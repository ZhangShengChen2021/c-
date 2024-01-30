#include <stdio.h> 

int main(void)
{
	int i = 0;
	char *s = "hello world";
	//s[0] = 'B';
	char *s2 = "hello world";//发现s和s2指向同一个地方（这个地方存放着hello world）且不能修改只可读 
	char s3[] = "hello world";//这里的s3的hello world是以数组的形式被存放在了本地变量中（和 i 在一块儿） 可以修改 
	
	printf("&i = %p\n",&i);
	printf("s = %p\n", s);
	printf("s2 = %p\n",s2);
	printf("s3 = %p\n",s3);
	s3[0] = 'B';
	printf("Here!s3[0] = %c\n" , s3[0]);
	
	return 0;
}
