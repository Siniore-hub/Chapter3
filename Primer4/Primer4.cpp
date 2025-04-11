// Primer4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    srand(2);
    int* size;
    size = new int;
    cout << "Введите размер массива: "; cin >> *size;
    //выделяем память для массива
    int** array;
    array = new int* [*size];
    for (int i = 0; i < *size; i++)
    {
        array[i] = new int[*size];
    }

    //записываем значения в массив 

    for (int i = 0; i < *size; i++)
    {
        for (int j = 0; j < *size; j++)
        {
            array[i][j] = rand() % 10;
        }
    }


    //выводим исходный массив
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < *size; i++)
    {
        for (int j = 0; j < *size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    //транспонируем матрицу
    for (int i = 0; i < *size; i++)
    {
        for (int j = 0; j < *size; j++)
        {
            array[i][j] = array[i][j];
        }
    }

    //выводим транспонированную матрицу
    cout << endl << "Транспонированная матрица: " << endl;
    for (int i = 0; i < *size; i++)
    {
        for (int j = 0; j < *size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    system("pause>nul");
    return 0;
}

