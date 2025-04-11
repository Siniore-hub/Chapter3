// Primer18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	srand(2);

	//ЗАДАЁМ РАЗМЕРЫ МАССИВОВ

	int* FirstSize;
	FirstSize = new int;
	cout << "Введите размер первого массива: "; cin >> *FirstSize;//для примера FirstSize=4

	int* SecondSize;
	SecondSize = new int;
	cout << "Введите размер второго массива: "; cin >> *SecondSize;//для примера SecondSize=3

	//ВЫДЕЛЯЕМ ПАМЯТЬ ПОД 3 МАССИВА

	int* FirstArray;
	FirstArray = new int[*FirstSize];

	int* SecondArray;
	SecondArray = new int[*SecondSize];

	int* ThirdArray;
	ThirdArray = new int[*FirstSize + *SecondSize];

	//ЗАПОЛНЯЕМ ПЕРВЫЕ 2 МАССИВА СЛУЧАЙНЫМИ ЧИСЛАМИ

	for (int i = 0; i < *FirstSize; i++)
	{
		FirstArray[i] = rand() % 10;
	}

	for (int i = 0; i < *SecondSize; i++)
	{
		SecondArray[i] = rand() % 10;
	}

	//ЗАПОЛНЯЕМ 3 МАССИВ

	for (int i = 0; i <= *FirstSize - 1; i++)
	{
		ThirdArray[i] = FirstArray[i];
	}
	for (int i = *FirstSize; i <= *FirstSize + *SecondSize - 1; i++)
	{
		ThirdArray[i] = SecondArray[i - *FirstSize];
	}

	//ВЫВОДИМ РЕЗУЛЬТАТ НА ЭКРАН

	//ПЕРВЫЙ МАССИВ

	cout << endl << "Первый массив: " << endl;
	for (int i = 0; i < *FirstSize; i++)
	{
		cout << FirstArray[i] << " ";
	}

	//ВТОРОЙ МАССИВ

	cout << endl << "Второй массив:" << endl;
	for (int i = 0; i < *SecondSize; i++)
	{
		cout << SecondArray[i] << " ";
	}

	//ТРЕТИЙ МАССИВ

	cout << endl << "Третий массив:" << endl;
	for (int i = 0; i < *FirstSize + *SecondSize; i++)
	{
		cout << ThirdArray[i] << " ";
	}

	//ОЧИЩАЕМ ПАМЯТЬ

	delete[]ThirdArray;
	delete[]SecondArray;
	delete[]FirstArray;
	delete FirstSize;
	delete SecondSize;

	system("pause>nul");
	return 0;
}

