#include <iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap62(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap62 a = " << a << endl;
	cout << "swap62 b = " << b << endl;
}
void swap622(int * p1, int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main62()
{
	//ָ��ͺ���
	//1.ֵ����
	int a = 10;
	int b = 20;
	/*swap62(a, b);*/

	//2.��ַ����
	//����ǵ�ַ���ݿ�������ʵ��
	swap622(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}