#include <iostream>
#include <conio.h>
using namespace std;
bool check_polindrom(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
    cout << "Hello World!\n";
    //5.Написать программу с функцией проверки, является ли введенное пятизначное число – палиндромом.
    setlocale(0, "");
    do
    {
		string str;
		cout << "Enter the word: ";
		cin >> str;
		if (check_polindrom(str))
		{
			cout << "Word is polindrom.";
		}
		else
		{
			cout << "Word is not polindrom";
		}
		return 0;
    } while (!(_getch() == 27));//Esc для завершения
}
