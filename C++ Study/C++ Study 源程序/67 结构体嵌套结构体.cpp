#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;	//���ұ��
	string name;	//��������
	int age;	//����
	struct student stu;	//������ѧ��
};

int main67()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << "��ʦ����: " << t.name << " ��ʦ��� " << t.id << " ��ʦ���� " << t.age<<endl
		<< "��ʦ������ѧ�� " << t.stu.name << " ѧ������ " << t.stu.age << " ѧ������ " << t.stu.score << endl;

	system("pause");
	return 0;
}