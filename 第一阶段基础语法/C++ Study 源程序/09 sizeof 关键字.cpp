#include <iostream>
using namespace std;

int main09()
{
	int num = 1;

	cout << "num 变量所占内存空间为:" << sizeof(num) << "字节" << endl;

	cout << "short 类型所占内存空间为:" << sizeof(short) << "字节" << endl;

	cout << "int 类型所占内存空间为:" << sizeof(int) << "字节" << endl;

	cout << "long 类型所占内存空间为:" << sizeof(long) << "字节" << endl;

	cout << "long long 类型所占内存空间为:" << sizeof(long long) << "字节" << endl;

	system("pause");
	return 0;
}