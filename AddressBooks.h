#pragma once
#include <string>
#define MAX 1000

extern struct Person
{
	std::string Name;//����
	int Sex;//�Ա�  1 ��    2 Ů
	int Age;//����
	std::string Phone;//�绰
	std::string Addr;//סַ
};

extern struct AddressBooks
{
	struct Person personArry[MAX];
	int Size;
};
