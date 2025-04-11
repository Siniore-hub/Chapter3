// Primer16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int *number;
    srand(2);
    number = new int;
    *number = rand() % 10;
    
    int* massiv;
    massiv = new int[*number];

    //ЗАПОЛНЯЕМ МАССИВ ЗАНЧЕНИЯМИ

    for (int i = 0; i <= *number/2; i++)
    {
        massiv[i] = i + 1;
        massiv[*number - i - 1] = massiv[i];
    }

    //ВЫВОДИМ ПОЛУЧИВШИЙСЯ МАССИВ

    for (int i = 0; i < *number; i++)
    {
        cout << massiv[i] << " ";
    }

    //ОЧИЩАЕМ ПАМЯТЬ

    delete[]massiv;
    delete number;
}

