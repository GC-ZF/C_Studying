#include <iostream>
using namespace std;
#include <string>

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};
//1.ֵ����
void printStudent1(student s)
{
	s.age = 100;
	cout << "�Ӻ���1�� ����: " << s.name << " ����: " << s.age << " ����: " << s.score << endl;
}
//2.��ַ����
void printStudent2(student *p)
{
	p->age = 200;
	cout << "�Ӻ���2�� ����: " << p->name << " ����: " << p->age << " ����: " << p->score << endl;
}
int main68()
{
	//�ṹ������������
	//��ѧ������һ�������У���ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s = { "����",20,85 };
	//cout << "����: " << s.name << " ����: " << s.age << " ����: " << s.score << endl;

	printStudent1(s);
	cout << "main������ ����: " << s.name << " ����: " << s.age << " ����: " << s.score << endl;
	printStudent2(&s);
	cout << "main������ ����: " << s.name << " ����: " << s.age << " ����: " << s.score << endl;

	system("pause");
	return 0;
}