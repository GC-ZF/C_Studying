#include <iostream>
using namespace std;

int main28()
{
	//1.三只小猪称体重
	int num1, num2, num3;

	//2.让用户输入三只小猪的重量
	cout << "请输入小猪A的体重" << endl;
	cin >> num1;
	cout << "请输入小猪B的体重" << endl;
	cin >> num2;
	cout << "请输入小猪C的体重" << endl;
	cin >> num3;
	
	cout << "小猪A的体重为:" << num1 << endl;
	cout << "小猪B的体重为:" << num2 << endl;
	cout << "小猪C的体重为:" << num3 << endl;

	//3.判断哪只最重
	if (num1 > num2)  //A比B重
	{
		if (num1 > num3)  //A比C重
			cout << "小猪A最重" << endl;
		else
			cout << "小猪C最重" << endl;
	}
	else  //B比A重
	{
		if (num2 > num3)
			cout << "小猪B最重" << endl;
		else
			cout << "小猪C最重" << endl;
	}

	system("pause");
	return 0;
}