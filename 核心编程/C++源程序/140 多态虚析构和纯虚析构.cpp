//#include <iostream>
//using namespace std;
//#include <string>
//
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal ���캯�����ã�" << endl;
//	}
//	virtual void Speak() = 0;
//
//	////�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal�������������ã�" << endl;
//	//}
//
//	//��������  (�������ʹ�������ֻ�ܴ���һ��)	��Ҫ����Ҳ��Ҫʵ��
//	//���˴�������֮��	�����Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal ���������������ã�" << endl;
//}
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯�����ã�" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "Сè��˵��!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat������������!" << endl;
//		if (this->m_Name != NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//public:
//	string *m_Name;
//};
//
//void test01()
//{
//	Animal *animal = new Cat("Tom");
//	animal->Speak();
//
//	//����ָ����������ʱ�� �����������������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}