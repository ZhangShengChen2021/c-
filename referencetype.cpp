#include<iostream>
using namespace std;// 使用std命名空间

int main(){
	int i = 5;
	int &j = i;
	i=7;
	cout << "i=" << i << "\nj=" <<j;
	
	return 0;
}
