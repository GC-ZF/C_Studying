#include <iostream>
using namespace std;

int main38()
{
	//乘法口诀表
	//外循环行	内循环列
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " * " << i << " = " << j * i<<"\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}