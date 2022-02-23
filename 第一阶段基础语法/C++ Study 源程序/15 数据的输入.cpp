#include <iostream>
using namespace std;
#include <string>

int main15()
{
	//1.整型
	int  int_type;
	cout << "请给整型变量int_type赋值:" << endl;
	cin >> int_type;
	cout << "整型变量int_type=" << int_type << endl<<endl;

	//2.浮点型
	float  float_type;
	cout << "请给浮点型变量float_type赋值:" << endl;
	cin >> float_type;
	cout << "浮点型变量float_type=" << float_type << endl << endl;

	//3.字符型
	char  char_type;
	cout << "请给字符型变量char_type赋值:" << endl;
	cin >> char_type;
	cout << "字符型变量char_type=" << char_type << endl << endl;

	//4.字符串型
	string  string_type;
	cout << "请给字符串型变量string_type赋值:" << endl;
	cin >> string_type;
	cout << "字符串型变量string_type=" << string_type << endl << endl;

	//5.bool类型  不能赋值英文(英文字符全为假)，非0的数值都表示真
	bool  bool_type;
	cout << "请给字符串型变量bool_type赋值:" << endl;
	cin >> bool_type;
	cout << "字符串型变量bool_type=" << bool_type << endl << endl;

	system("pause");
	return 0;
}