#include <iostream>
using namespace std;

int main07()
{
	//1.标识符不能是关键字
	//int int =1;

	//2.标识符只能由字母、数字、下划线组成
	//3.第一个字符必须为字母或下划线
	int aa = 1;
	int a1 = 2;
	int a_b = 3;
	int a_b1 = 4;
	int _a = 5;
	//int 1a = 6;


	//4.标识符中字母区分大小写
	int a = 100;
	//cout << A << endl;	//A和a不是同一个名称


	system("pause");
	return 0;
}