#include <iostream>
using namespace std;

int main42()
{
	//数组
	//1. 数组类型 数组名[ 数组长度 ];
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//访问数组元素
	cout << arr[0] << " ";
	cout << arr[1] << " ";
	cout << arr[2] << " ";
	cout << arr[3] << " ";
	cout << arr[4] << endl;
	/*用for输出*/
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//2.数据类型 数组名[ 数组长度 ] = { 值1,值2... };
	//如果在初始化数据的时候，没有全部填写完，会用0来填补剩余数据
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	//3.数据类型 数组名[ ] = { 值1,值2... };
	//定义数组的时候，必须有初始长度
	int arr3[] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}