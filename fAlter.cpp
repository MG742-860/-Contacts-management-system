#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "fRemove.h"

void fAlter(struct AddressBooks* abs) {
	using namespace std;
	string a_name = "0";
	int a_select = 0;
	cout << "������Ҫ�޸ĵ���ϵ�˵�������" << endl;
	cin >> a_name;
	if (!detect(abs, a_name)) {
		cout << "���������������" << endl;
		system("pause");

		cout << "����1�������������������޸ģ�����0������һ��" << endl;
		cin >> a_select;
		if (a_select == 1)
		{
			fAlter(abs);
		}
		else 
		{
			return;
		}
	}

	cout << "�ҵ���������Ϊ  " << a_name << "  ����ϵ��" << endl;
	for (int i = 0; i < abs->Size; i++)
	{
		if (a_name == abs->personArry[i].Name)
		{
			cout << i << "\t";
			cout << "������" << abs->personArry[i].Name << "\t";
			cout << "�Ա�" << ((abs->personArry[i].Sex == 1) ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArry[i].Age << "\t";
			cout << "�绰��" << abs->personArry[i].Phone << "\t";
			cout << "סַ��" << abs->personArry[i].Addr << endl;
		}
	}
	

	int A_select = 0;
	cout << "������Ҫ�޸ĵ���ϵ�˵ı�ţ�����ǰ�����֣���" << endl;
	cin >> A_select;
	cout << "������  " << abs->personArry[A_select].Name << "  �����䣺" << endl;
	cin >> abs->personArry[A_select].Age;
	cout << "������  " << abs->personArry[A_select].Name << "  �ĵ绰��" << endl;
	cin >> abs->personArry[A_select].Phone;
	cout << "������  " << abs->personArry[A_select].Name << "  ��סַ��" << endl;
	cin >> abs->personArry[A_select].Addr;

	cout << "�޸ĳɹ����޸ĺ�Ϊ��" << endl;
	cout << "������" << abs->personArry[A_select].Name << "\t";
	cout << "�Ա�" << ((abs->personArry[A_select].Sex == 1) ? "��" : "Ů") << "\t";
	cout << "���䣺" << abs->personArry[A_select].Age << "\t";
	cout << "�绰��" << abs->personArry[A_select].Phone << "\t";
	cout << "סַ��" << abs->personArry[A_select].Addr << endl;

	system("pause");
	cout << "����1�������������������޸ģ�����0������һ��" << endl;
	cin >> a_select;
	if (a_select == 1)
	{
		fAlter(abs);
	}
	else
	{
		system("cls");
		return;
	}
}