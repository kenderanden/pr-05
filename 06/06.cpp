#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!\n";
	//6.Написать программу, в которой при вводе расстояния в милях выводится перевод в километры и в футы.
	setlocale(0, "");
	do
	{
		int mil, km, ft;
		cout << "Мили: ";
		cin >> mil;
		cout << "Километры: " << mil * 1.609 << "\n" << "Футы: " << 5280 * mil << "\n\n";
	} while (!(_getch() == 27));//Esc для завершения
}