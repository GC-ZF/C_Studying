#include <iostream>
using namespace std;

int main34()
{
	//1.�ȴ�ӡ������ά����
	int num = 100;
	int a, b, c;	//�����λ��ʮλ����λ
	do
	{
		//2.��������λ�������ҵ�ˮ�ɻ���
		a = num % 10;		//��ȡ���ֵĸ�λ
		b = num / 10 % 10;	//��ȡ���ֵ�ʮλ
		c = num / 100;		//��ȡ���ֵİ�λ
		if (a*a*a + b * b*b + c * c*c == num)	//�����ˮ�ɻ����Ŵ�ӡ
			cout << num << " ";
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}