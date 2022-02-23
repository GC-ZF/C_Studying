#include <iostream>
using namespace std;
#include <ctime>

int main32()
{
	//添加随机数种子 利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1.系统生成随机数
	int num = rand()%100+1;  //生成100个随机数，区间0+1~99+1

	//2.玩家进行猜测
	int guess;
	cout << "开始游戏，请输入你猜的数字" << endl;

	//3.判断玩家的猜测
	while (1)
	{
		cin >> guess;
		//猜错	提示猜的结果 过大或过小 重新返回第2步
		if (guess < num)
			cout << "猜小了" << endl;
		else if (guess > num)
			cout << "猜大了" << endl;
		else
		{
			//猜对	退出游戏
			cout << "恭喜猜对了" << endl;
			break;	//可以用break关键字来退出当前循环
		}
	}

	system("pause");
	return 0;
}