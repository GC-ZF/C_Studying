#include <iostream>
using namespace std;

int main37()
{
	//利用循环嵌套实现星图
	//打印一行星图
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}