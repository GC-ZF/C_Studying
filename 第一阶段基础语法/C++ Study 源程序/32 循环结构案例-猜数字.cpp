#include <iostream>
using namespace std;
#include <ctime>

int main32()
{
	//������������ ���õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1.ϵͳ���������
	int num = rand()%100+1;  //����100�������������0+1~99+1

	//2.��ҽ��в²�
	int guess;
	cout << "��ʼ��Ϸ����������µ�����" << endl;

	//3.�ж���ҵĲ²�
	while (1)
	{
		cin >> guess;
		//�´�	��ʾ�µĽ�� ������С ���·��ص�2��
		if (guess < num)
			cout << "��С��" << endl;
		else if (guess > num)
			cout << "�´���" << endl;
		else
		{
			//�¶�	�˳���Ϸ
			cout << "��ϲ�¶���" << endl;
			break;	//������break�ؼ������˳���ǰѭ��
		}
	}

	system("pause");
	return 0;
}