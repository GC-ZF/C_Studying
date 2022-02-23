#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//联系人结构体
struct Person
{
	string m_Name; //姓名
	int m_Sex; //性别：1男 2女
	int m_Age; //年龄
	string m_Phone; //电话
	string m_Addr; //住址
};

//通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX]; //通讯录中保存的联系人数组
	int m_Size; //通讯录中人员个数
};

//1.添加联系人
void addPerson(Addressbooks * abs)
{
	//判断通讯录是否已满，如果满了就不再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		//姓名
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		int sex = 0;
		cout << "请输入性别: (1 -- 男 2 -- 女)" << endl;
		while (true)
		{
			//如果输入的是1 或者 2可以退出循环，因为输入的是正确值
			//如果输入有误，重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入错误" << endl;
			}
		}
		//年龄
		int age = 0;
		cout << "请输入年龄: " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		string phone;
		cout << "请输入联系电话: " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		string address;
		cout << "请输入家庭住址: " << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");	//清屏操作
	}
}
//2、显示所有联系人信息
void showPerson(Addressbooks * abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名: " << abs->personArray[i].m_Name << "\t";
			cout << "年龄: " << abs->personArray[i].m_Age << "\t";
			cout << "性别: " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "手机号: " << abs->personArray[i].m_Phone << "\t";
			cout << "家庭住址: " << abs->personArray[i].m_Addr << endl;
		}
		system("pause"); //按任意键继续
		system("cls");	//清屏操作
	}
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的位置，不存在返回-1
//参数1 通讯录 参数2 对比姓名
int isExist(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//找到用户输入的姓名
		if (abs->personArray[i].m_Name == name)
		{
			return i;	//找到了，返回这个人在数组中的下标位置
		}
	}
	return -1;
}
//3、删除指定联系人信息
void deletePerson(Addressbooks * abs)
{
	cout << "请输入您要删除的联系人姓名" << endl;

	string name;
	cin >> name;
	
	int ret;
	ret=isExist(abs,name);
	if (ret != -1)
	{
		//查找到人，要进行删除操作
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->personArray[i + 1] = abs->personArray[i];
		}
		abs->m_Size--;	//更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else
		cout << "联系人不存在" << endl;

	system("pause");
	system("cls");
}

//4、查找指定联系人信息
void findPerson(Addressbooks * abs)
{
	cout << "请输入您要查找的联系人: " << endl;
	string name;
	cin >> name;

	int ret;
	ret=isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名: " << abs->personArray[ret].m_Name << "\t";
		cout << "年龄: " << abs->personArray[ret].m_Age << "\t";
		cout << "性别: " << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "手机号: " << abs->personArray[ret].m_Phone << "\t";
		cout << "家庭住址: " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "联系人不存在" << endl;
	}
	system("pause"); //按任意键继续
	system("cls");	//清屏操作
}

//5、修改指定联系人信息
void modifyPerson(Addressbooks * abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret=isExist(abs,name);
	if (ret!=-1)	//找到指定联系人
	{
		string name; //姓名
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		int sex; //性别：1男 2女
		cout << "请输入性别: (1 -- 男 2 -- 女)" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				//输入正确，退出循环
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
				cout << "输入有误，请重新输入" << endl;
		}

		int age; //年龄
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone; //电话
		cout << "请输入联系电话" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string addr; //住址
		cout << "请输入家庭住址" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
	}
	else //未找到联系人
	{
		cout << "联系人不存在" << endl;
	}
	system("pause"); //按任意键继续
	system("cls");	//清屏操作
}

//6、清空所有联系人
void cleanPerson(Addressbooks * abs)
{
	cout << "是否确定清空？ 1 -- 清空 2 -- 退出" << endl;
	int select;
	cin >> select;
	while (true)
	{
		if (select == 1 || select == 2)
		{
			if (select == 1)
			{
				abs->m_Size = 0;	//将当前记录联系人数量置为0，做逻辑情况操作
				cout << "通讯录已清空" << endl;
				break;
			}
			else
				break;
		}
		else
		{
			cout << "输入有误,请重新输入" << endl;
		}
	}

	system("pause");
	system("cls");
}
//菜单界面
void showMenu()
{
	cout << "****************************" << endl;
	cout << "*****   1.添加联系人   *****" << endl;
	cout << "*****   2.显示联系人   *****" << endl;
	cout << "*****   3.删除联系人   *****" << endl;
	cout << "*****   4.查找联系人   *****" << endl;
	cout << "*****   5.修改联系人   *****" << endl;
	cout << "*****   6.清空联系人   *****" << endl;
	cout << "*****   0.退出通讯录   *****" << endl;
	cout << "****************************" << endl;
}

int main()
{
	//创建通讯录结构体变量
	struct Addressbooks abs;
	abs.m_Size = 0;

	int select = 0;	//创建用户选择输入的变量

	while (true)
	{
		//菜单调用
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:	//1.添加联系人
			addPerson(&abs);	//利用地址传递，可以修饰实参
			break;
		case 2:	//2.显示联系人
			showPerson(&abs);
			break;
		case 3:	//3.删除联系人
			deletePerson(&abs);
			break;
		case 4:	//4.查找联系人
			findPerson(&abs);
			break;
		case 5:	//5.修改联系人
			modifyPerson(&abs);
			break;
		case 6:	//6.清空联系人
			cleanPerson(&abs);
			break;
		case 0:	//0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default://
			cout << "输入错误请重新输入";
			break;
		}
	}
	system("pause");
	return 0;
}