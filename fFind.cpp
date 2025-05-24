#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "fRemove.h"
#include "fFind.h"

void fFind(const struct AddressBooks* abs) {
	using namespace std;
	string r_name = "0";
	cout << "请输入要查找的联系人的姓名：" << endl;
	cin >> r_name;
	if (!detect(abs, r_name))
	{
		cout << "输入的联系人姓名不存在" << endl;
		int _select = 0;
		cout << "输入1重新输入并查找，输入0返回上一级" << endl;
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

	cout << "找到以下姓名为 " << r_name << " 的联系人" << endl;
	for (int i = 0; i < abs->Size; i++)
	{
		if (r_name == abs->personArry[i].Name)
		{
			cout << "姓名：" << abs->personArry[i].Name << "\t";
			cout << "性别：" << ((abs->personArry[i].Sex == 1) ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArry[i].Age << "\t";
			cout << "电话：" << abs->personArry[i].Phone << "\t";
			cout << "住址：" << abs->personArry[i].Addr << endl;
		}
	}

	system("pause");
	system("cls");
}