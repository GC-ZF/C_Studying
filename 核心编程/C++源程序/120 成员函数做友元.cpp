//#include <iostream>
//using namespace std;
//#include <string>
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); //��visit�������Է���Building��˽�г�Ա
//	void visit2(); //��visit2���������Է���Building��˽�г�Ա
//	Building * building;
//};
//class Building
//{
//	friend void GoodGay::visit();//���߱����� GoodGay���µ�visit��Ա������Ϊ����ĺ����ѿ��Է���˽�г�Ա
//public:
//	Building();
//public:
//	string m_SettingRoom;
//private:
//	string m_BedRoom;
//};
////����ʵ�ֳ�Ա����
//Building::Building()
//{
//	m_SettingRoom = "����";
//	m_BedRoom = "����";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;//����һ��Building�����ڶ�������ָ��ά���������
//}
//void GoodGay::visit()
//{
//	cout << "visit �������ڷ���" << building->m_SettingRoom << endl;
//	cout << "visit �������ڷ���" << building->m_BedRoom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2 �������ڷ���" << building->m_SettingRoom << endl;
//	//cout << "visit2 �������ڷ���" << building->m_BedRoom << endl;
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