#include <iostream>
using namespace std;

int main30()
{
	//switch���
	//����Ӱ���д�� 10~9 ���䣬8~7 �ǳ��ã�6~5 һ�㣬5���� ��Ƭ

	//1.��ʾ�û�����Ӱ����
	cout << "�����Ӱ���" << endl;

	//2.�û���ʼ���д��
	int score;
	cin >> score;
	cout << "����ķ���Ϊ:" << score << endl;

	//3.�����û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case(10):
	case(9):
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;	//�˳���ǰ��֧
	case(8):
	case(7):
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case(6):
	case(5):
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default:
		cout << "����Ϊ��Ӱ����Ƭ" << endl;
		break;
	}

	system("pause");
	return 0;
}