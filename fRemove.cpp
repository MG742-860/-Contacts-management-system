#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "fRemove.h"

using namespace std;

bool detect(const struct AddressBooks* abs, string r_name) {
	for (int i = 0; i < abs->Size; i++)
	{
		if (r_name == abs->personArry[i].Name)
		{
			return true;
		}
	}
	return false;
}

void PrintSinglePer(const struct AddressBooks* abs,int i) {
	cout << i << "\t";
	cout << "������" << abs->personArry[i].Name << "\t";
	cout << "�Ա�" << ((abs->personArry[i].Sex == 1)?"��":"Ů") << "\t";
	cout << "���䣺" << abs->personArry[i].Age << "\t";
	cout << "�绰��" << abs->personArry[i].Phone << "\t";
	cout << "סַ��" << abs->personArry[i].Addr << endl;
}

void fRemove(struct AddressBooks* abs) {
	//���ȼ����ϵ���Ƿ����
	string r_name = "0";
	cout << "������Ҫɾ������ϵ�˵�������" << endl;
	cin >> r_name;
	if (!detect(abs,r_name))
	{
		cout << "�������ϵ�����������ڣ������Ƿ��������" << endl;
		int _select = 0;
		cout << "����1�������룬����0������һ��" << endl;
		cin >> _select;
		if (_select == 1)
		{
			fRemove(abs);
		}
		else
		{
			return;
		}
	}

	for (int i = 0; i < abs->Size; i++)
	{
		if (r_name == abs->personArry[i].Name)
		{
			PrintSinglePer(abs, i);
		}
	}
	int r_select = 0;
	cout << "����������ǰ�����ֽ���ɾ����" << endl;
	cin >> r_select;

	for (int i = r_select; i < abs->Size; i++)
	{
		abs->personArry[i] = abs->personArry[i + 1];
	}
	abs->Size--;
	cout << "ɾ���ɹ���" << endl;

	system("pause");
	system("cls");

}