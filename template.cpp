//函数模板
#include<iostream>
using namespace std;

template <typename Type>
Type Max(Type a, Type b)
{
	cout << typeid(Type).name() << endl;
	return a > b ? a : b;
}

int main()
{
	cout << Max(3.4, 2.0);
}
/*
运行时获知变量类型名称，可以使用 typeid(变量).name()
int ia = 3;
if (typeid(ia) == typeid(int))
{
	cout << "int" << endl;
}
*/