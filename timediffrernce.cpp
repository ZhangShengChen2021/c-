#include <stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;		
//	这里利用int类型数据相除，只取整数部分的特点（取余%得到） 
	
	scanf("%d %d",&hour1, &minute1);
	scanf("%d %d",&hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;   
//  同类型时间（60进制），英尺英寸（12进制）都可以利用进制换算转化为十进制进行计算 
	
	int t = t2 - t1;
	
	printf("时间差是%d小时%d分",t/60, t%60);	// t/60 ->小时部分  t%60 ->分钟部分 
	return 0;
	
}
