//#include <iostream>
//using namespace std;
//#include <string>
//
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal 构造函数调用！" << endl;
//	}
//	virtual void Speak() = 0;
//
//	////利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用！" << endl;
//	//}
//
//	//纯虚析构  (虚析构和纯虚析构只能存在一个)	需要声明也需要实现
//	//有了纯虚析构之后	这个类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用！" << endl;
//}
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用！" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "小猫在说话!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数调用!" << endl;
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
//	//父类指针在析构的时候 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
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