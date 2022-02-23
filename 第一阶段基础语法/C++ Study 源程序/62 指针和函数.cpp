#include <iostream>
using namespace std;

//实现两个数字进行交换
void swap62(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap62 a = " << a << endl;
	cout << "swap62 b = " << b << endl;
}
void swap622(int * p1, int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main62()
{
	//指针和函数
	//1.值传递
	int a = 10;
	int b = 20;
	/*swap62(a, b);*/

	//2.地址传递
	//如果是地址传递可以修饰实参
	swap622(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}