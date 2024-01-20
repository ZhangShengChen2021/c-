#include <stdio.h>
int search(int k, int a[], int len)
{
	int ret = -1;
	int left = 0;
	int right = len-1;
	while( right > left)
	{
		int mid = (left+right)/2;
		if( a[mid] == k )
		{
			ret = mid;
			break;
		}else if( a[mid] > k){
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	return -1;
}

int main()
{
	int k = 10;
	int a[] = {2,4,7,11,13,16,21,24,27,32,36,40,46,};
	int r = search(k, a, sizeof(a)/sizeof(a[0]));
	
	return 0;
}
