#include <stdio.h> 

int main(void)
{
	int i = 0;
	char *s = "hello world";
	//s[0] = 'B';
	char *s2 = "hello world";//����s��s2ָ��ͬһ���ط�������ط������hello world���Ҳ����޸�ֻ�ɶ� 
	char s3[] = "hello world";//�����s3��hello world�����������ʽ��������˱��ر����У��� i ��һ����� �����޸� 
	
	printf("&i = %p\n",&i);
	printf("s = %p\n", s);
	printf("s2 = %p\n",s2);
	printf("s3 = %p\n",s3);
	s3[0] = 'B';
	printf("Here!s3[0] = %c\n" , s3[0]);
	
	return 0;
}
