#include <iostream>
using namespace std;

int main()
{
	
	int num = 0;
	int a, b, c;	//代表个位、十位、百位
	do
	{
		a = num % 10;
		b = (num % 100)%10;
		c = num / 100;
		if (a*a*a + b * b*b + c * c*c == num)
			cout << num << " ";
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}