#include<iostream>
using namespace std;// ʹ��std�����ռ�

int main(){
	int i = 5;
	int &j = i;
	i=7;
	cout << "i=" << i << "\nj=" <<j;
	
	return 0;
}
