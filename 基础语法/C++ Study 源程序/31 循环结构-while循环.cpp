#include <iostream>
using namespace std;

int main31()
{
	//while循环
	//在屏幕中打印 0~9 这10个数字
	int num = 0;
	while (num < 10)
	{
		cout << num<<"  ";
		num++;
	}
	//注意:在写循环一定要避免死循环的出现

	system("pause");
	return 0;
}