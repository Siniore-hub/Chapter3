// Primer20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	srand(2);

	//ВЫДЕЛЯЕМ ПАМЯТЬ ПОД РАЗМЕР ИСХОДНОГО ДВУМЕРНОГО МАССИВА

	int* OriginalSize;
	OriginalSize = new int;
	cout << "Введите размер массива: "; cin >> *OriginalSize;

	//ВЫДЕЛЯЕМ ПАМЯТЬ ПОД ИСХОДНЫЙ ДВУМЕРНЫЙ МАССИВ

	int** OriginalArray;
	OriginalArray = new int* [*OriginalSize];
	for (int i = 0; i < *OriginalSize; i++)
	{
		OriginalArray[i] = new int[*OriginalSize];
	}

	//ЗАПОЛНЯЕМ ИСХОДНЫЙ МАССИВ СЛУЧАЙНЫМИ ЧИСЛАМИ

	for (int i = 0; i < *OriginalSize; i++)
	{
		for (int j = 0; j < *OriginalSize; j++)
		{
			OriginalArray[i][j] = rand() % 10;
		}
	}

	//ВЫВОДИМ ИСХОДНЫЙ МАССИВ НА ЭКРАН

	cout << endl << "Исходный массив:" << endl;
	for (int i = 0; i < *OriginalSize; i++)
	{
		for (int j = 0; j < *OriginalSize; j++)
		{
			cout << OriginalArray[i][j] << " ";
		}
		cout << endl;
	}

	//ВВОДИМ ВЫЧЕРКИВАЕМЫЕ СТОЛБЦЫ И СТРОКИ

	int DeletedColumn, DeletedRow;
	cout << "Введите вычеркиваемую строку: "; cin >> DeletedRow;
	cout << "Введите вычеркивыемый столбец: "; cin >> DeletedColumn;


	//ВЫВОДИМ ПОЛУЧЕННЫЙ МАССИВ

	cout << endl << "Полученный массив:" << endl;
	for (int i = 0; i < *OriginalSize; i++)
	{
		if (DeletedRow > *OriginalSize or DeletedColumn > *OriginalSize) {
			cout << "Неправильный ввод данных!";
			break;
		}
		if (i == DeletedRow) continue;
		for (int j = 0; j < *OriginalSize; j++)
		{
			if (j == DeletedColumn) continue;
			cout << OriginalArray[i][j] << " ";
		}
		cout << endl;
	}

	//ОЧИЩАЕМ ПАМЯТЬ
	delete[]OriginalArray;
	delete OriginalSize;
	system("pause>nul");
	return 0;
}

