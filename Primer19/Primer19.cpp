// Primer19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    srand(2);

    //ЗАДАЁМ РАЗМЕР ДИНАМИЧЕСКИХ МАССИВОВ

    int* size;
    size = new int;
    cout << "Введите размер массивов: "; cin >> *size;

    //ВЫДЕЛЯЕМ ПАМЯТЬ ПОД МАССИВЫ

    int* FirstArray;
    FirstArray = new int[*size];

    int* SecondArray;
    SecondArray = new int[*size];

    int* ThirdArray;
    ThirdArray = new int[2 * *size];

    //ЗАПОЛНЯЕМ ПЕРВЫЕ ДВА МАССИВА СЛУЧАЙНЫМИ ЧИСЛАМИ

    for (int i = 0; i < *size; i++)
    {
        FirstArray[i] = rand() % 10;
    }

    for (int i = 0; i < *size; i++)
    {
        SecondArray[i] = rand() % 10;
    }

    //ЗАПОЛНЯЕМ ЗНАЧЕНИЯМИ ТРЕТИЙ МАССИВ

    for (int i = 0; i < 2 * *size; i++)
    {
        if (i % 2 == 0)
        {
            ThirdArray[i] = FirstArray[int(i/2)];
        }
        if (i % 2 == 1)
        {
            ThirdArray[i] = SecondArray[int(i/2)];
        }
    }

    //ВЫВОД РЕЗУЛЬТАТА НА ЭРАН

    //ПЕРВЫЙ МАССИВ

    cout << endl << "Первый массив:" << endl;
    for (int i = 0; i < *size; i++)
    {
        cout << FirstArray[i] << " ";
    }

    //ВТОРОЙ МАССИВ

    cout << endl << "Второй массив:" << endl;
    for (int i = 0; i < *size; i++)
    {
        cout << SecondArray[i] << " ";
    }

    //ТРЕТИЙ МАССИВ

    cout << endl << "Третий массив:" << endl;
    for (int i = 0; i < 2 * *size; i++)
    {
        cout << ThirdArray[i] << " ";
    }

    //ОЧИЩАЕМ ПАМЯТЬ

    delete[]ThirdArray;
    delete[]SecondArray;
    delete[]FirstArray;
    delete size;

    system("pause>nul");
    return 0;
}

