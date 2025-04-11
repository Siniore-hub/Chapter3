// Primer12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{

	system("chcp 1251>nul");
	srand(2);

	//ВЫДЕЛЕНИЕ ПАМЯТИ ПОД ПЕРЕМЕННЫЕ m,n,l

	int* m;
	m = new int;
	cout << "Введите m: "; cin >> *m;
	cout << endl;

	int* n;
	n = new int;
	cout << "Введите n: "; cin >> *n;
	cout << endl;

	int* l;
	l = new int;
	cout << "Введите l: "; cin >> *l;
	cout << endl;

	//ВЫДЕЛЯЕМ ПАМЯТЬ ПОД МАТРИЦЫ

	int** A;
	A = new int* [*m];
	for (int i = 0; i < *m; i++)
	{
		A[i] = new int[*n];
	}

	int** B;
	B = new int* [*n];
	for (int i = 0; i < *n; i++)
	{
		B[i] = new int[*l];
	}

	int** C;
	C = new int* [*m];
	for (int i = 0; i < *m; i++)
	{
		C[i] = new int[*l];
	}

	//ЗАПИСЫВАЕМ В МАТРИЦЫ A и B случайные числа

	//Матрица А
	for (int i = 0; i < *m; i++)
	{
		for (int j = 0; j < *n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

	//Матрица B
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *l; j++)
		{
			B[i][j] = rand() % 10;
		}
	}

	//ВЫВОДИМ МАТРИЦЫ B НА ЭКРАН

	//Матрица А
	cout << endl << "Матрица А: " << endl;
	for (int i = 0; i < *m; i++)
	{
		for (int j = 0; j < *n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	//Матрица B
	cout << endl << "Матрица B:" << endl;
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *l; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}

	//ЗАПОЛНЯЕМ МАТРИЦУ C

	for (int i = 0; i < *m; i++)
	{
		for (int j = 0; j < *l; j++)
		{
			int Amount = 0;
			for (int k = 0; k < *n; k++)
			{
				Amount += A[i][k] * B[k][j];
			}
			C[i][j] = Amount;

		}
	}

	//ВЫВОД МАТРИЦЫ C НА ЭКРАН
	cout << endl << "Матрица C:" << endl;
	for (int i = 0; i < *m; i++)
	{
		for (int j = 0; j < *l; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < *m; i++)
	{
		delete[]A[i];
	}
	delete[]A;

	for (int i = 0; i < *n; i++)
	{
		delete[]B[i];
	}
	delete[]B;

	for (int i = 0; i < *m; i++)
	{
		delete[]C[i];
	}
	delete[]C;
	delete l;
	delete n;
	delete m;
	system("pause");
	return 0;
}

