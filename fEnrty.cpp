#include <iostream>
#include <string>
#include "fEntry.h"
#include "AddressBooks.h"
void fEntry(struct AddressBooks *abs) {
	using namespace std;

	if (abs->Size == MAX)
	{
		cout << "联系人已经添加到最大值1000，无法继续添加" << endl;
		return;
	}

	cout<<"请输入联系人姓名："<<endl;
	string name;
	cin >> name;
	abs->personArry[abs->Size].Name = name;

	cout << "请输入性别：" << endl;
	cout << "1-男  2-女" << endl;
	int sex = 0;
	cin >> sex;
	abs->personArry[abs->Size].Sex = sex;

	cout << "请输入年龄：" << endl;
	int age = 0;
	cin >> age;
	abs->personArry[abs->Size].Age = age;

	cout << "请输入电话：" << endl;
	string phone;
	cin >> phone;
	abs->personArry[abs->Size].Phone = phone;

	cout << "请输入住址：" << endl;
	string add;
	cin >> add;
	abs->personArry[abs->Size].Addr = add;

	abs->Size++;
	cout << "添加联系人成功！" << endl;

	cout << "按1继续添加，按0返回上一级" << endl;
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