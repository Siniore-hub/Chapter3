// Primer17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    srand(2);
    int* size;
    size = new int;
    cout << "Введите размер массивов: "; cin >> *size;

    int* First_array;
    int* Second_array;
    int* Third_array;
    First_array = new int[*size];
    Second_array = new int[*size];
    Third_array = new int[*size];

    //ЗАПОЛНЯЕМ ПЕРВЫЕ ДВА МАССИВА СЛУЧАЙНЫМИ ЧИСЛАМИ

    for (int i = 0; i < *size; i++)
    {
        First_array[i] = rand() % 10;
    }
    for (int i = 0; i < *size; i++)
    {
        Second_array[i] = rand() % 10;
    }

    for (int i = 0; i < *size; i++)
    {
        if (First_array[i] > Second_array[i])
        {
            Third_array[i] = First_array[i];
        }
        else Third_array[i] = Second_array[i];
    }

    //ВЫВОДИМ МАССИВЫ

    cout <<endl<< "Первый массив:" << endl;
    for (int i = 0; i < *size; i++)
    {
        cout << First_array[i] << " ";
    }

    cout <<endl<< "Второй массив:" << endl;
    for (int i = 0; i < *size; i++)
    {
        cout << Second_array[i] << " ";
    }

    cout <<endl<< "Третий массив:" << endl;
    for (int i = 0; i < *size; i++)
    {
        cout << Third_array[i] << " ";
    }

    //ОЧИЩАЕМ ПАМЯТЬ

    delete[]Third_array;
    delete[]Second_array;
    delete[]First_array;
    delete size;
}

