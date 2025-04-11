// Primer14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    srand(2);

	system("chcp 1251>nul");
	srand(2);

	//ВЫДЕЛЯЕМ ПАМЯТЬ ПОД РАЗМЕР ДВУМЕРНОГО МАССИВА

	int* Size;
	Size = new int;
	cout << "Введите размер массива: "; cin >> *Size;

	//ВЫДЕЛЯЕМ ПАМЯТЬ ПОД ДВУМЕРНЫЙ МАССИВ

	int** OriginalArray;
	OriginalArray = new int* [*Size];
	for (int i = 0; i < *Size; i++)
	{
		OriginalArray[i] = new int[*Size];
	}

	//ВЫДЕЛЯЕМ ПАМЯТЬ ПОД МАССИВ С МАКСИМАЛЬНЫМИ ЗНАЧЕНИЯМИ СТРОК

	int* MaxArray;
	MaxArray = new int[*Size];

	//ЗАПОЛНЯЕМ ДВУМЕРНЫЙ МАССИВ СЛУЧАЙНЫМИ ЧИСЛАМИ

	for (int i = 0; i < *Size; i++)
	{
		for (int j = 0; j < *Size; j++)
		{
			OriginalArray[i][j] = rand() % 10;
		}
	}


	//ЗАПОЛНЯЕМ МАССИВ МАКСИМАЛЬНЫХ ЗНАЧЕНИЙ

	for (int i = 0; i < *Size; i++)
	{
		int max = OriginalArray[i][0];
		for (int j = 0; j < *Size; j++)
		{
			if (OriginalArray[i][j] > max) max = OriginalArray[i][j];
		}
		MaxArray[i] = max;
	}

	//ВЫВОДИМ ДВУМЕРНЫЙ МАССИВ

	cout << endl << "Исходный массив: " << endl;
	for (int i = 0; i < *Size; i++)
	{
		for (int j = 0; j < *Size; j++)
		{
			cout << OriginalArray[i][j] << " ";
		}
		cout << endl;
	}

	//ВЫВОДИМ МАССИВ МАКСИМАЛЬНЫХ ЗНАЧЕНИЙ
	cout << endl << "Максимальные значения строк:" << endl;
	for (int i = 0; i < *Size; i++)
	{
		cout << MaxArray[i] << " ";
	}
	//ОЧИЩАЕМ ПАМЯТЬ

	delete[]MaxArray;
	for (int i = 0; i < *Size; i++)
	{
		delete[]OriginalArray[i];
	}
	delete[]OriginalArray;
	delete Size;

	system("pause>nul");
	return 0;
}

