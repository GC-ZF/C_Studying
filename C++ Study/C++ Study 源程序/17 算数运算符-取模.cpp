#include <iostream>
using namespace std;

int main17()
{
	//取模运算本质:求余数
	int a1 = 10;
	int b1 = 3;

	cout << a1 << "%" << b1 << "=" << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;

	cout << a2 << "%" << b2 << "=" << a2 % b2 << endl;

	//两个数相除除数不可以为0，所以也做不了取模运算
	int a3 = 10;
	int b3 = 0;
	
	/*cout << a3 << "%" << b3 << "=" << a3 % b3 << endl;*/  

	//报错 两个小数不可以做取模运算
	double a4 = 3.14;
	double b4 = 1.1;

	/*cout << a4 % b4;*/

	system("pause");
	return 0;
}