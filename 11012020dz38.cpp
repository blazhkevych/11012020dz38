/*
* Пользователь 	вводит с клавиатуры объем в гигабайтах.Перевести его в биты.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите объем в гигабайтах : \n";
	int a;
	cin >> a;
	cout << "бит = " << a * 8589934592 << endl;
	return 0;
}
