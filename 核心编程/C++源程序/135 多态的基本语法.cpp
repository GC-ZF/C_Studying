//#include <iostream>
//using namespace std;
//
////������
//class Animal
//{
//public:
//	//Speak���������麯��
//	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
////è��
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////����
//class Dog :public Animal
//{
//public:
//
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//
//};
//
////��ַ��� �ڱ���׶�ȷ��������ַ	���಻��virtual cat.Dospeak����ø���
////�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ��󶨡������virtual cat.Dospeak���������
//
////��̬��̬��������
////1.�м̳й�ϵ
////2.����Ҫ��д������麯��
////��̬ʹ�ã�
////����ָ�������ָ���������
//void DoSpeak(Animal & animal)	//Animal &animal = cat;
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//
//	Dog dog;
//	DoSpeak(dog);
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}