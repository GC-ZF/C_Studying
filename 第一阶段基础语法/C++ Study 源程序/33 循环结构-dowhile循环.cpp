#include <iostream>
using namespace std;

int main33()
{
	//do...while语句
	//在屏幕中输出0~9这十个数字

	int num = 0;
	do
	{
		cout << num << " ";
		num++;
	} while (num < 10);
	//do...while和while循环区别在于do...while会先执行一次循环语句

	system("pause");
	return 0;
}