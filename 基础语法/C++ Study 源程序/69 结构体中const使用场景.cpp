#include <iostream>
using namespace std;
#include <string>

//constʹ�ó���
struct student
{
	string name;
	int age;
	int score;
};
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const student *s)
{
	//s->age=150;	//����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "����: " << s->name << " ����: " << s->age << " ����: " << s->score << endl;
}
int main69()
{
	//�����ṹ�����
	struct student s = { "����",15,70 };
	
	//ͨ��������ӡ�ṹ����Ϣ
	printStudent(&s);

	system("pause");
	return 0;
}