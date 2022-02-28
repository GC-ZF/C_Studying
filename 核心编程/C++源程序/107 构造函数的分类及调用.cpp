//#include <iostream>
//using namespace std;
//
////1.构造函数的分类及调用
////分类
////按参数分为： 有参构造和无参构造(默认构造)
////按类型分为： 普通构造和拷贝构造
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person 无参构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person 有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		//讲传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person 拷贝构造函数的调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//	int age;
//};
////调用
//void test01()
//{
//	////1.括号法
//	//Person p;//默认构造函数调用
//	//Person p2(10);//有参构造函数
//	//Person p3(p2);//拷贝构造函数
//	////注意事项
//	////调用默认构造函数，不要加() 因为下面这行代码，编译器会认为是一个函数的声明
//	//Person p1();
//	//cout << "p2的年龄为:" << p2.age<<endl;
//	//cout << "p3的年龄为:" << p3.age << endl;
//
//	//2.显示法
//	Person p1;
//	Person p2 = Person(10);//有参构造
//	Person p3 = Person(p2);//拷贝构造
//
//	Person(10);//等号右侧单独拿出来叫匿名对象  特点:当前行执行结束后，系统会立即回收掉匿名对象
//	cout << "aaa" << endl;
//	//注意事项2
//	//不要利用拷贝构造函数 初始化匿名对象  编译器会认为Person(p3)==Person p3; 对象声明
//	Person(p3);
//
//	//3.隐式转换法
//	Person p4 = 10;//相当于写了 Person p4=Person(10);  有参构造
//	Person p5 = p4;//拷贝构造
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}