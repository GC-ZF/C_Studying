#include <iostream>
using namespace std;

int main48()
{
	//��ά����������;

	//1.���Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "��ά����ռ���ڴ�ռ�:" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�:" << sizeof(arr[0]) << endl;	//0�����к�
	cout << "��ά�����һ��Ԫ��ռ���ڴ�:" << sizeof(arr[0][0]) << endl;

	cout << "��ά���������:" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.���Բ鿴��ά������׵�ַ
	cout << "��ά�����׵�ַ" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַ" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַ" << (int)arr[1] << endl;

	cout << "��ά�����һ��Ԫ���׵�ַ" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ���׵�ַ" << (int)&arr[0][1] << endl;

	system("pause");
	return 0;
}