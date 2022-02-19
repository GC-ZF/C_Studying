#include <iostream>
using namespace std;

int main45()
{
	//实现数组元素逆置
	//1.创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前:";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//2.实现逆置
	/*
	2.1记录起始下标位置
	2.2记录结束下标位置
	2.3起始下标与结束下标的元素互换
	2.4起始位置++结束位置--
	2.5循环执行2.1操作，直到起始位示>=结束位置
	*/
	int start = 0;	//起始下标
	int end = sizeof(arr) / sizeof(arr[0])-1;	//结束下标
	int temp;

	while (start < end)
	{
		//元素互换
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		//下标更新
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
	cout << "数组逆置后:";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}