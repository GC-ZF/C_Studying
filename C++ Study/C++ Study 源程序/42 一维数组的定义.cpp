#include <iostream>
using namespace std;

int main42()
{
	//����
	//1. �������� ������[ ���鳤�� ];
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//��������Ԫ��
	cout << arr[0] << " ";
	cout << arr[1] << " ";
	cout << arr[2] << " ";
	cout << arr[3] << " ";
	cout << arr[4] << endl;
	/*��for���*/
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//2.�������� ������[ ���鳤�� ] = { ֵ1,ֵ2... };
	//����ڳ�ʼ�����ݵ�ʱ��û��ȫ����д�꣬����0���ʣ������
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	//3.�������� ������[ ] = { ֵ1,ֵ2... };
	//���������ʱ�򣬱����г�ʼ����
	int arr3[] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}