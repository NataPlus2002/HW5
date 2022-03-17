#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
#include <Windows.h>

int main()
{
	const double exchange_rate = 118,76;
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	long double money;
	std::locale euro("de_DE.utf8");
	std::locale ruble("ru_RU.utf8");
	std::cin.imbue(ruble);
	std::cin >> std::get_money(money);
	std::cout.imbue(euro);
	money /= exchange_rate;

	std::cout << std::showbase << std::put_money(money);

	return 0;
}
