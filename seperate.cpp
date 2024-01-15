#include <stdio.h>//整数分解
 
//int main()
//{
//	int x;
//	 
//	scanf("%d", &x);
	
//	int t =0;
//	// 先逆序一遍 
//	do{
//		int d = x%10;
//		t = t*10+d;
//		x /= 10;
//	} while( x>0 );
//	printf("x=%d,t=%d\n", x, t);
//	x = t; 
//	do{
//		int d = x%10;
//		printf("%d",d);
//		//if循环解决末尾不要空格的问题 
//		if( x>=10 ){
//			printf(" ");
//		}
//		
//		x /= 10;
//	} while( x>0 );
//	
//	return 0;
//}
//这种算法挺好 但对于700->7而不是007
int main()
{
	int x;
//	scanf("%d", &x); 
	
	x = 70000;
	int mask = 1;
	int t = x;
	
	while( t>9 ){
		t /= 10;
		mask *= 10;
	}		
		printf("x=%d, mask=%d\n", x, mask);
	 
	do{
	 	int d = x / mask;
	 	printf("%d",d);
		if( mask >9 ){
			printf(" ");
		}
	 		x %= mask;
			mask /= 10;	
	//		printf("x=%d,mask=%d,d=%d\n", x, mask, d);
		 
	 }while( mask > 0 );
	 return 0;
}
  
