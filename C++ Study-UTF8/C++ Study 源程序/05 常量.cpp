#include <iostream>
using namespace std;

//1.#define 宏常量
#define day 7

int main05()
{
	//day = 8;	//报错，宏常量不可以修改
	cout << "一周有" << day << "天" << endl;

	//2.const修饰变量
	const int month = 12;
	//month = 13;	//报错,const修饰的变量也称为常量
	cout << "一年有" << month << "个月" << endl;

	system("pause");
	return 0;
}