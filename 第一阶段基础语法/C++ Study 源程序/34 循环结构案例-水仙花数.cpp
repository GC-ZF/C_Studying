#include <iostream>
using namespace std;

int main34()
{
	//1.先打印所有三维数字
	int num = 100;
	int a, b, c;	//代表个位、十位、百位
	do
	{
		//2.从所有三位数字中找到水仙花数
		a = num % 10;		//获取数字的个位
		b = num / 10 % 10;	//获取数字的十位
		c = num / 100;		//获取数字的百位
		if (a*a*a + b * b*b + c * c*c == num)	//如果是水仙花数才打印
			cout << num << " ";
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}