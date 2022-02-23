#include <iostream>
using namespace std;

int main11()
{
	//1.字符型变量 char 变量名 = '字符'
	char ch = 'A';
	cout << ch << endl;

	//2.字符型变量所占内存大小
	cout << "char字符型变量所占内存:" << sizeof(char) << endl;

	//3.字符型变量常见错误
	//ch = "b";			//错误，不可以用双引号
	//ch = 'abcd';		//错误，单引号只能引用一个字符

	//4.字符型变量对应ASCII码
	cout <<"ch 所对应的ASCII码:"<< (int)ch << endl;	//将字符对应的ASCII码强转换成int型

	system("pause");
	return 0;
}