#include <iostream>
using namespace std;
#include <string>

int main13()
{
	//1.C语言风格字符串  char 字符串名[] = "xx"
	//注意:等号后面要用双引号 包含起来字符串
	char str[] = "Hello World";
	cout << str << endl;

	//2.C++风格字符串	用C++风格字符串时，要包含“#include <string>”头文件
	string str2 = "Hello World";
	cout << str2 << endl;

	system("pause");
	return 0;
}