#include <iostream>
using namespace std;
#include <string>

//�ṹ��ָ��
//����ѧ���ṹ��
struct student
{
	string name;	//����
	int age;	//����
	int score;	//����
};
int main66()
{
	//1.����ѧ���Ľṹ�����
	struct student s = { "����",18,100 };
	//2.ͨ��ָ��ָ��ṹ�����
	struct student * p = &s;
	//3.ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�룬���ʽṹ���е����ԣ���Ҫ����' -> '
	cout << "����: " << p->age << " ����: " << p->name << " ����: " << p->score << endl;

	system("pause");
	return 0;
}