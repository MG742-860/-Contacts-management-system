#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "fRemove.h"
#include "fFind.h"

void fFind(const struct AddressBooks* abs) {
	using namespace std;
	string r_name = "0";
	cout << "������Ҫ���ҵ���ϵ�˵�������" << endl;
	cin >> r_name;
	if (!detect(abs, r_name))
	{
		cout << "�������ϵ������������" << endl;
		int _select = 0;
		cout << "����1�������벢���ң�����0������һ��" << endl;
		cin >> _select;
		if (_select == 1)
		{
			fFind(abs);
		}
		else
		{
			return;
		}
	}

	cout << "�ҵ���������Ϊ " << r_name << " ����ϵ��" << endl;
	for (int i = 0; i < abs->Size; i++)
	{
		if (r_name == abs->personArry[i].Name)
		{
			cout << "������" << abs->personArry[i].Name << "\t";
			cout << "�Ա�" << ((abs->personArry[i].Sex == 1) ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArry[i].Age << "\t";
			cout << "�绰��" << abs->personArry[i].Phone << "\t";
			cout << "סַ��" << abs->personArry[i].Addr << endl;
		}
	}

	system("pause");
	system("cls");
}