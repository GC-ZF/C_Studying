#include <iostream>
using namespace std;
#include <string>

int main16()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 << "+" << b1 << "=" << a1 + b1 << endl;
	cout << a1 << "-" << b1 << "=" << a1 - b1 << endl;
	cout << a1 << "*" << b1 << "=" << a1 * b1 << endl;
	cout << a1 << "÷" << b1 << "=" << a1 / b1 << endl;//两个整数相除，结果依然是整数，将小数部分去除

	int a2 = 10;
	int b2 = 20;
	cout << a2 << "÷" << b2 << "=" << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	/*cout << a3 << "/" << b3 << "=" << a3 / b3 << endl;*///两个数相除，除数不可以为0

	//两个小数可以相除  运算结果也是小数
	double a4 = 0.5;
	double b4 = 0.25;
	cout << a4 << "÷" << b4 << "=" << a4 / b4 << endl;

	system("pause");
	return 0;
}