// 02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //2.Написать программу с функцией перевода из радиан в градусы.
    setlocale(LC_ALL, "Russian");
    
    cout << "Hello World!\n";
    do
    {
        cout << "Введите радиант(через точку): ";
        double a;
        cin >> a;
        double x = a / (3.14 / 180);
        cout << "Градус = " << x << "\n";
    } while (!(_getch() == 27));//Esc для завершения
}
