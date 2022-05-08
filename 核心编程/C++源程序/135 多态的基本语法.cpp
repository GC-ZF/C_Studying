//#include <iostream>
//using namespace std;
//
////动物类
//class Animal
//{
//public:
//	//Speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
////猫类
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////狗类
//class Dog :public Animal
//{
//public:
//
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//
//};
//
////地址早绑定 在编译阶段确定函数地址	父类不加virtual cat.Dospeak会调用父类
////如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定。父类加virtual cat.Dospeak会调用子类
//
////动态多态满足条件
////1.有继承关系
////2.子类要重写父类的虚函数
////多态使用：
////父类指针或引用指向子类对象
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