#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "ShowPerson.h"

using namespace std;

void ShowPerson(struct AddressBooks *abs) {
	if (abs->Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	for (int i = 0; i < abs->Size; i++)
	{
		cout << "������" << abs->personArry[i].Name << "\t";
		cout << "�Ա�" << ((abs->personArry[i].Sex == 1) ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArry[i].Age << "\t";
		cout << "�绰��" << abs->personArry[i].Phone << "\t";
		cout << "סַ��" << abs->personArry[i].Addr << endl;
	}
	system("pause");
	system("cls");
}