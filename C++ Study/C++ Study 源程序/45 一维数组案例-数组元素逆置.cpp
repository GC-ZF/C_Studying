#include <iostream>
using namespace std;

int main45()
{
	//ʵ������Ԫ������
	//1.��������
	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ:";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//2.ʵ������
	/*
	2.1��¼��ʼ�±�λ��
	2.2��¼�����±�λ��
	2.3��ʼ�±�������±��Ԫ�ػ���
	2.4��ʼλ��++����λ��--
	2.5ѭ��ִ��2.1������ֱ����ʼλʾ>=����λ��
	*/
	int start = 0;	//��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0])-1;	//�����±�
	int temp;

	while (start < end)
	{
		//Ԫ�ػ���
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		//�±����
		start++;
		end--;
	}
	/*for (int i = 0; i < 5; i++)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
		if (start == end)
			break;
	}*/
	cout << "�������ú�:";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}