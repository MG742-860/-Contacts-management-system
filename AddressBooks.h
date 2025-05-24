#pragma once
#include <string>
#define MAX 1000

extern struct Person
{
	std::string Name;//名字
	int Sex;//性别  1 男    2 女
	int Age;//年龄
	std::string Phone;//电话
	std::string Addr;//住址
};

extern struct AddressBooks
{
	struct Person personArry[MAX];
	int Size;
};
