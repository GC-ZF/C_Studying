#include <iostream>
using namespace std;

//ð�������� ����1 ������׵�ַ ����2 ����ĳ���
void bubbleSort(int *arr, int len) //int arr[]Ҳ����
{
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
//��ӡ����
void printArray(int *arr, int len)
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
}
int main63()
{
	//1.�ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	//2.����������ʵ��ð������
	bubbleSort(arr, len);

	//3.��ӡ����������
	printArray(arr, len);

	system("pause");
	return 0;
}