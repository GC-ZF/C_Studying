#include <iostream>
using namespace std;

int main41()
{
	//goto���
	cout << "1.xxx" << endl;
	cout << "2.xxx" << endl;
	goto FLAG;
	cout << "3.xxx" << endl;
	cout << "4.xxx" << endl;
FLAG:
	cout << "5.xxx" << endl;

	system("pause");
	return 0;
}