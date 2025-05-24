#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "fRemove.h"

void fAlter(struct AddressBooks* abs) {
	using namespace std;
	string a_name = "0";
	int a_select = 0;
	cout << "请输入要修改的联系人的姓名：" << endl;
	cin >> a_name;
	if (!detect(abs, a_name)) {
		cout << "输入的姓名不存在" << endl;
		system("pause");

		cout << "输入1重新输入姓名并进行修改，输入0返回上一级" << endl;
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

	cout << "找到以下姓名为  " << a_name << "  的联系人" << endl;
	for (int i = 0; i < abs->Size; i++)
	{
		if (a_name == abs->personArry[i].Name)
		{
			cout << i << "\t";
			cout << "姓名：" << abs->personArry[i].Name << "\t";
			cout << "性别：" << ((abs->personArry[i].Sex == 1) ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArry[i].Age << "\t";
			cout << "电话：" << abs->personArry[i].Phone << "\t";
			cout << "住址：" << abs->personArry[i].Addr << endl;
		}
	}
	

	int A_select = 0;
	cout << "请输入要修改的联系人的编号（姓名前的数字）：" << endl;
	cin >> A_select;
	cout << "请输入  " << abs->personArry[A_select].Name << "  的年龄：" << endl;
	cin >> abs->personArry[A_select].Age;
	cout << "请输入  " << abs->personArry[A_select].Name << "  的电话：" << endl;
	cin >> abs->personArry[A_select].Phone;
	cout << "请输入  " << abs->personArry[A_select].Name << "  的住址：" << endl;
	cin >> abs->personArry[A_select].Addr;

	cout << "修改成功！修改后为：" << endl;
	cout << "姓名：" << abs->personArry[A_select].Name << "\t";
	cout << "性别：" << ((abs->personArry[A_select].Sex == 1) ? "男" : "女") << "\t";
	cout << "年龄：" << abs->personArry[A_select].Age << "\t";
	cout << "电话：" << abs->personArry[A_select].Phone << "\t";
	cout << "住址：" << abs->personArry[A_select].Addr << endl;

	system("pause");
	cout << "输入1重新输入姓名并进行修改，输入0返回上一级" << endl;
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