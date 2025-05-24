#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "ShowPerson.h"

using namespace std;

void ShowPerson(struct AddressBooks *abs) {
	if (abs->Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	for (int i = 0; i < abs->Size; i++)
	{
		cout << "姓名：" << abs->personArry[i].Name << "\t";
		cout << "性别：" << ((abs->personArry[i].Sex == 1) ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArry[i].Age << "\t";
		cout << "电话：" << abs->personArry[i].Phone << "\t";
		cout << "住址：" << abs->personArry[i].Addr << endl;
	}
	system("pause");
	system("cls");
}