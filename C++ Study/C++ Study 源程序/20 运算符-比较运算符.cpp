#include <iostream>
using namespace std;

int main20()
{
	int a = 10;
	int b = 20;

	// ==
	cout << "a == b		" << (a == b) << endl;//括号表示先计算a==b，再执行endl，不然报错

	// !=
	cout << "a != b		" << (a != b) << endl;

	// >
	cout << "a > b		" << (a > b) << endl;

	// <
	cout << "a < b		" << (a < b) << endl;

	// >=
	cout << "a >= b		" << (a >= b) << endl;

	// <=
	cout << "a <= b		" << (a <= b) << endl;

	system("pause");
	return 0;
}