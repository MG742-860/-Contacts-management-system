#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "fClear.h"
void fClear(struct AddressBooks *abs) {
	using namespace std;
	cout << "����Ϊ�������������ϵ�ˣ�ȷ��Ҫ������" << endl;
	int c_select = 0;
c_select_tag:
	cout << "1-����   0-����" << endl;
	cin >> c_select;
	if (c_select == 0)
	{
		cout << "��ȡ�����" << endl;
		system("pause");
		system("cls");
		return;
	}
	else if(c_select == 1) 
	{
		abs->Size = 0;
		cout << "�����" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "��������ȷ�����֣�" << endl;
		goto c_select_tag;
	}
	return;
}