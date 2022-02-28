//#include <iostream>
//using namespace std;
//#include <string>
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); //让visit函数可以访问Building中私有成员
//	void visit2(); //让visit2函数不可以访问Building中私有成员
//	Building * building;
//};
//class Building
//{
//	friend void GoodGay::visit();//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友可以访问私有成员
//public:
//	Building();
//public:
//	string m_SettingRoom;
//private:
//	string m_BedRoom;
//};
////类外实现成员函数
//Building::Building()
//{
//	m_SettingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;//创建一个Building对象在堆区并且指针维护这个对象
//}
//void GoodGay::visit()
//{
//	cout << "visit 函数正在访问" << building->m_SettingRoom << endl;
//	cout << "visit 函数正在访问" << building->m_BedRoom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2 函数正在访问" << building->m_SettingRoom << endl;
//	//cout << "visit2 函数正在访问" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}