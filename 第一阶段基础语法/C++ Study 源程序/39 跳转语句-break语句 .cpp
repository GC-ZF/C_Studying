#include <iostream>
using namespace std;

int main39()
{
	//break��ʹ��ʱ��
	//1.������ѭ�������
	cout << "��ѡ�񸱱����Ѷ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.�е�" << endl;
	cout << "3.����" << endl;

	int select;//����ѡ�����ı���
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	default:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	}

	//2.������ѭ�������
	for (int i = 0; i < 10; i++)
	{
		//���i����5���˳�ѭ�������ٴ�ӡ
		if (i == 5)
		{
			cout << endl;
			break;
		}
		cout << i << " ";
	}

	//3.������Ƕ��ѭ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
				break;	//�˳��ڲ�ѭ��	��ӡ5*10�ġ�*��
			cout << "* ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}