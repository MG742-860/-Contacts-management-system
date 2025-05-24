#include <iostream>
#include <string>
#include "AddressBooks.h"
#include "ShowMenu.h"
#include "fEntry.h"
#include "ShowPerson.h"
#include "fRemove.h"
#include "fFind.h"
#include "Alter.h"
#include "fClear.h"




enum f_contactsys
{
	Entry = 1, Print, Remove, Find, Alter, Clear, fExit = 0
};

int main(){
	using namespace std;

	//创建通讯录结构体
	AddressBooks Per;
	Per.Size = 0;

	int select = 0;
	while (true)
	{
		ShowMenu();
		cin >> select;
		switch (select)
		{
		    case Entry:
		    {
			    fEntry(&Per);
		    	break;
		    }
		    case Print:
			{
				ShowPerson(&Per);
				break;
			}
		    case Remove:
			{
				fRemove(&Per);
				break;
			}
		    case Find:
			{
				fFind(&Per);
				break;
			}
		    case Alter:
			{
				fAlter(&Per);
				break;
			}
		    case Clear:
			{
				fClear(&Per);
				break;
			}
		    case fExit:
		    {
			    return 0;
			    break;
		    }
		    default:
			    break;
		}
	}
	cout << "程序已退出，欢迎下次使用" << endl;
	return 0;
}
