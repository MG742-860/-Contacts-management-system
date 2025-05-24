#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "fClear.h"
void fClear(struct AddressBooks *abs) {
	using namespace std;
	cout << "此行为将会清空所有联系人，确定要继续吗？" << endl;
	int c_select = 0;
c_select_tag:
	cout << "1-继续   0-返回" << endl;
	cin >> c_select;
	if (c_select == 0)
	{
		cout << "已取消清空" << endl;
		system("pause");
		system("cls");
		return;
	}
	else if(c_select == 1) 
	{
		abs->Size = 0;
		cout << "已清空" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "请输入正确的数字！" << endl;
		goto c_select_tag;
	}
	return;
}