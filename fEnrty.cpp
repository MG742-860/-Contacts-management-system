#include <iostream>
#include <string>
#include "fEntry.h"
#include "AddressBooks.h"
void fEntry(struct AddressBooks *abs) {
	using namespace std;

	if (abs->Size == MAX)
	{
		cout << "��ϵ���Ѿ���ӵ����ֵ1000���޷��������" << endl;
		return;
	}

	cout<<"��������ϵ��������"<<endl;
	string name;
	cin >> name;
	abs->personArry[abs->Size].Name = name;

	cout << "�������Ա�" << endl;
	cout << "1-��  2-Ů" << endl;
	int sex = 0;
	cin >> sex;
	abs->personArry[abs->Size].Sex = sex;

	cout << "���������䣺" << endl;
	int age = 0;
	cin >> age;
	abs->personArry[abs->Size].Age = age;

	cout << "������绰��" << endl;
	string phone;
	cin >> phone;
	abs->personArry[abs->Size].Phone = phone;

	cout << "������סַ��" << endl;
	string add;
	cin >> add;
	abs->personArry[abs->Size].Addr = add;

	abs->Size++;
	cout << "�����ϵ�˳ɹ���" << endl;

	cout << "��1������ӣ���0������һ��" << endl;
	int select_ = 0;
	cin >> select_;
	if (select_ == 1)
	{
		cout << "" << endl;
		fEntry(abs);
	}
	system("cls");

	return;
}