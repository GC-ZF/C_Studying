#include <iostream>
using namespace std;

int main10()
{
	//Ĭ������£����һ��С������ʾ6λ��Ч����
	float f1 = 3.1415926f; //����fĬ����double���͡�ɾ��f��������3.14���Բ鿴����
	double d1 = 3.1415926;

	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "float��ռ�ڴ�ռ�Ϊ:" << sizeof(f1) << "�ֽ�" << endl;
	cout << "double��ռ�ڴ�ռ�Ϊ:" << sizeof(d1) << "�ֽ�" << endl;

	//��ѧ������
	float f2 = 3e2;		//3*10^2
	float f3 = 3e-2;	//3*10^-2

	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}