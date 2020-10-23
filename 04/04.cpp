#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "Hello World!\n";
    setlocale(0, "");
    //4.Написать программу с функцией нахождения площади окружности по заданному радиусу.
    do
    {
        int r;
        cout << "Радиус: ";
        cin >> r;
        cout << "Площадь: " << 3.14 * r * r << "\n" ;
    }while (!(_getch() == 27));//Esc для завершения
}