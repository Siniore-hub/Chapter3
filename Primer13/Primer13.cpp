// Primer13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    char str[100] = "Hello world";

    //Выводим исходный символьный массив
    cout << "Исходный символьный массив: " << endl;
    for (int i = 0;i<size(str); i++)
    {
        cout << str[i];
    }

    //преобразуем символьный массив
    cout << endl << "Преобразованный массив: " << endl;
    for (int i = size(str)-1; i >= 0; i--)
    {
        cout << str[i];
    }
}

