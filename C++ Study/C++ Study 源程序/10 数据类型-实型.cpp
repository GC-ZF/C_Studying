#include <iostream>
using namespace std;

int main10()
{
	//默认情况下，输出一个小数，显示6位有效数字
	float f1 = 3.1415926f; //不加f默认是double类型。删掉f，鼠标放在3.14可以查看类型
	double d1 = 3.1415926;

	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;

	//统计float和double占用内存空间
	cout << "float所占内存空间为:" << sizeof(f1) << "字节" << endl;
	cout << "double所占内存空间为:" << sizeof(d1) << "字节" << endl;

	//科学计数法
	float f2 = 3e2;		//3*10^2
	float f3 = 3e-2;	//3*10^-2

	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}