#include <iostream>
using namespace std;

int main19()
{
	//=
	int a = 10;
	cout << "a=" << a << endl;

	//+=
	a += 2;	//a=a+2
	cout << "a+=2�Ľ��Ϊ" << a << endl;

	//-=
	a = 10;
	a -= 2;	//a=a-2
	cout << "a-=2�Ľ��Ϊ" << a << endl;

	//*=
	a = 10;
	a *= 2;	//a=a*2
	cout << "a*=2�Ľ��Ϊ" << a << endl;

	// /=
	a = 10;
	a /= 2;	//a=a/2
	cout << "a/=2�Ľ��Ϊ" << a << endl;

	// %=
	a = 10;
	a %= 2;	//a=a%2
	cout << "a%=2�Ľ��Ϊ" << a << endl;

	system("pause");
	return 0;
}