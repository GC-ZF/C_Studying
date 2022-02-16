#include <iostream>
using namespace std;

int main()
{
	/*提示用户输入一个高考考试分数，根据分数做如下判断
	分数如果大于600分视为考上一本，大于500分考上二本，大于400分考上三本，其余视为未考上本科；
	在一本大学分数中，如果大于700分，考入北大，大于650分，考入清华，大于600分，考入人大*/

	//1.提示输入高考分数
	int score;
	cout << "请输入高考考试分数" << endl;
	cin >> score;

	//2.显示高考分数
	cout << "您输入的分数为" << score << endl;

	/*3.判断
	如果大于600 一本，大于700 北大，大于650 清华，其余人大
	如果大于500二本，如果大于400三本，其余未考上本科*/
	if (score > 600)
	{
		if (score > 700)
		{
			cout << "北大" << endl;
		}
		else if (score > 650)
		{
			cout << "清华" << endl;
		}
		else
		{
			cout << "人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜你考上二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜你考上三本大学" << endl;
	}
	else
	{
		cout << "未考上本科大学，请再接再厉" << endl;
	}

	system("pause");
	return 0;
}