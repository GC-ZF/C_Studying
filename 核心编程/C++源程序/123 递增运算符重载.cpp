#include <iostream>
using namespace std;

//重载递增运算符
//自定义整型
class MyInteger 
{
	friend ostream& operator<<(ostream& out, MyInteger myint);
public:
	MyInteger() 
	{
		m_Num = 0;
	}
	//前置++
	MyInteger& operator++() //链式思想 返回引用是为了一直对一个数据进行递增操作
	{
		//先++
		m_Num++;
		//再将自身返回
		return *this;
	}
	//后置++
	//int 代表占位参数,可以用于区分前置和后置递增
	MyInteger operator++(int) //局部对象，操作完后内存释放，如果使用引用是非法操作
	{
		//先  记录当时结果
		MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
		//后递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	}
private:
	int m_Num;
};


ostream& operator<<(ostream& out, MyInteger myint) 
{
	out << myint.m_Num;
	return out;
}


//前置++ 先++ 再返回
void test01() 
{
	MyInteger myInt;
	cout << ++myInt << endl;
	cout << myInt << endl;

	//cout << ++(++myInt) << endl;
	//cout << myInt << endl;//如果不用链式思想，返回的是++myInt
}

//后置++ 先返回 再++
void test02() 
{
	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}

int main() 
{
	test01();
	//test02();

	system("pause");
	return 0;
}