#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//��ϵ�˽ṹ��
struct Person
{
	string m_Name; //����
	int m_Sex; //�Ա�1�� 2Ů
	int m_Age; //����
	string m_Phone; //�绰
	string m_Addr; //סַ
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼����Ա����
};

//1.�����ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		//����
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		int sex = 0;
		cout << "�������Ա�: (1 -- �� 2 -- Ů)" << endl;
		while (true)
		{
			//����������1 ���� 2�����˳�ѭ������Ϊ���������ȷֵ
			//�������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "�������" << endl;
			}
		}
		//����
		int age = 0;
		cout << "����������: " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		string phone;
		cout << "��������ϵ�绰: " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		string address;
		cout << "�������ͥסַ: " << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");	//��������
	}
}
//2����ʾ������ϵ����Ϣ
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "����: " << abs->personArray[i].m_Name << "\t";
			cout << "����: " << abs->personArray[i].m_Age << "\t";
			cout << "�Ա�: " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "�ֻ���: " << abs->personArray[i].m_Phone << "\t";
			cout << "��ͥסַ: " << abs->personArray[i].m_Addr << endl;
		}
		system("pause"); //�����������
		system("cls");	//��������
	}
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������е�λ�ã������ڷ���-1
//����1 ͨѶ¼ ����2 �Ա�����
int isExist(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ��û����������
		if (abs->personArray[i].m_Name == name)
		{
			return i;	//�ҵ��ˣ�����������������е��±�λ��
		}
	}
	return -1;
}
//3��ɾ��ָ����ϵ����Ϣ
void deletePerson(Addressbooks * abs)
{
	cout << "��������Ҫɾ������ϵ������" << endl;

	string name;
	cin >> name;
	
	int ret;
	ret=isExist(abs,name);
	if (ret != -1)
	{
		//���ҵ��ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i + 1] = abs->personArray[i];
		}
		abs->m_Size--;	//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
		cout << "��ϵ�˲�����" << endl;

	system("pause");
	system("cls");
}

//4������ָ����ϵ����Ϣ
void findPerson(Addressbooks * abs)
{
	cout << "��������Ҫ���ҵ���ϵ��: " << endl;
	string name;
	cin >> name;

	int ret;
	ret=isExist(abs, name);
	if (ret != -1)
	{
		cout << "����: " << abs->personArray[ret].m_Name << "\t";
		cout << "����: " << abs->personArray[ret].m_Age << "\t";
		cout << "�Ա�: " << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "�ֻ���: " << abs->personArray[ret].m_Phone << "\t";
		cout << "��ͥסַ: " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "��ϵ�˲�����" << endl;
	}
	system("pause"); //�����������
	system("cls");	//��������
}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks * abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret=isExist(abs,name);
	if (ret!=-1)	//�ҵ�ָ����ϵ��
	{
		string name; //����
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		int sex; //�Ա�1�� 2Ů
		cout << "�������Ա�: (1 -- �� 2 -- Ů)" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				//������ȷ���˳�ѭ��
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
				cout << "������������������" << endl;
		}

		int age; //����
		cout << "����������" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone; //�绰
		cout << "��������ϵ�绰" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string addr; //סַ
		cout << "�������ͥסַ" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
	}
	else //δ�ҵ���ϵ��
	{
		cout << "��ϵ�˲�����" << endl;
	}
	system("pause"); //�����������
	system("cls");	//��������
}

//6�����������ϵ��
void cleanPerson(Addressbooks * abs)
{
	cout << "�Ƿ�ȷ����գ� 1 -- ��� 2 -- �˳�" << endl;
	int select;
	cin >> select;
	while (true)
	{
		if (select == 1 || select == 2)
		{
			if (select == 1)
			{
				abs->m_Size = 0;	//����ǰ��¼��ϵ��������Ϊ0�����߼��������
				cout << "ͨѶ¼�����" << endl;
				break;
			}
			else
				break;
		}
		else
		{
			cout << "��������,����������" << endl;
		}
	}

	system("pause");
	system("cls");
}
//�˵�����
void showMenu()
{
	cout << "****************************" << endl;
	cout << "*****   1.�����ϵ��   *****" << endl;
	cout << "*****   2.��ʾ��ϵ��   *****" << endl;
	cout << "*****   3.ɾ����ϵ��   *****" << endl;
	cout << "*****   4.������ϵ��   *****" << endl;
	cout << "*****   5.�޸���ϵ��   *****" << endl;
	cout << "*****   6.�����ϵ��   *****" << endl;
	cout << "*****   0.�˳�ͨѶ¼   *****" << endl;
	cout << "****************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	struct Addressbooks abs;
	abs.m_Size = 0;

	int select = 0;	//�����û�ѡ������ı���

	while (true)
	{
		//�˵�����
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:	//1.�����ϵ��
			addPerson(&abs);	//���õ�ַ���ݣ���������ʵ��
			break;
		case 2:	//2.��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:	//3.ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:	//4.������ϵ��
			findPerson(&abs);
			break;
		case 5:	//5.�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:	//6.�����ϵ��
			cleanPerson(&abs);
			break;
		case 0:	//0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default://
			cout << "�����������������";
			break;
		}
	}
	system("pause");
	return 0;
}