#include <iostream>
using namespace std;

int main36()
{
	//敲桌子案例
	//1.先输出1~100数字
	for (int i = 1; i <= 100; i++)
	{
		//2.从100个数字中找到特殊数字，打印"敲桌子"
		//如果是7的倍数或者个位有7或者十位有7，打印"敲桌子"
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
			cout << "敲桌子" << "\t";
		else//如果不是特殊数字，打印数字
			cout << i << "\t";
	}

	system("pause");
	return 0;
}