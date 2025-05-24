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

	//����ͨѶ¼�ṹ��
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
	cout << "�������˳�����ӭ�´�ʹ��" << endl;
	return 0;
}
