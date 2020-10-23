#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "Hello World!\n";
    //3.Написать программу с функцией нахождения среднего арифметического трех чисел.
    setlocale(0, "");
    do
    {
        int a, b, c;
        cout << "1: ";
        cin >> a;
        cout << "2: ";
        cin >> b;
        cout << "3: ";
        cin >> c;
        cout << "Среднее арефметическое: " << (a + b + c) / 3 << "\n";
    }while (!(_getch() == 27));//Esc для завершения
}