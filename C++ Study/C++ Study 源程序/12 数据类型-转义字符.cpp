#include <iostream>
using namespace std;

int main12()
{
	//反斜杠 错误，cout << "\" << endl;
	cout << "\\" << endl;
	
	//水平制表符	\t占八个字符，包括\t之前的字符个数	优点是数据输出整齐
	cout << "123\tHelloWorld" << endl;
	cout << "12345\tHelloWorld" << endl;

	//换行符 两个效果相同
	cout << "Hello\n" ;
	cout << "Hello" << endl;

	system("pause");
	return 0;
}