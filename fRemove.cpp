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
	cout << "姓名：" << abs->personArry[i].Name << "\t";
	cout << "性别：" << ((abs->personArry[i].Sex == 1)?"男":"女") << "\t";
	cout << "年龄：" << abs->personArry[i].Age << "\t";
	cout << "电话：" << abs->personArry[i].Phone << "\t";
	cout << "住址：" << abs->personArry[i].Addr << endl;
}

void fRemove(struct AddressBooks* abs) {
	//首先检测联系人是否存在
	string r_name = "0";
	cout << "请输入要删除的联系人的姓名：" << endl;
	cin >> r_name;
	if (!detect(abs,r_name))
	{
		cout << "输入的联系人姓名不存在，请检查是否输入错误！" << endl;
		int _select = 0;
		cout << "输入1重新输入，输入0返回上一级" << endl;
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
	cout << "请输入姓名前的数字进行删除：" << endl;
	cin >> r_select;

	for (int i = r_select; i < abs->Size; i++)
	{
		abs->personArry[i] = abs->personArry[i + 1];
	}
	abs->Size--;
	cout << "删除成功！" << endl;

	system("pause");
	system("cls");

}