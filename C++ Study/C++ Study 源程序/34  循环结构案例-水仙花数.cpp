#include <iostream>
using namespace std;

int main()
{
	
	int num = 0;
	int a, b, c;	//�����λ��ʮλ����λ
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