// array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <Windows.h>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

class Mass
{
	int arr[100][100];
	int rows, colms;
	int i, j;
public:
	void ArrayFill()
	{
		this->colms = colms;
		this->rows = rows;
		cout << "Enter rows namber "; 
		cin >> rows; 
		cout << endl;
		cout << "Enter columns namber "; 
		cin >> colms;
		cout << endl;
		this->arr[rows][colms];

		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < colms; j++)
			{
				arr[i][j] = rand() % 25;
			}
		}
	}
	void ArrayChange()
	{
		cout << "Mass";
		cout << endl;
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < colms; j++)
			{
				cout << setw(4) << arr[i][j];
			}
			cout << endl;
		}
		cout << "New Mass";
		cout << endl;
		for (j = 0; j < colms; j++)
		{
			for (i = 0; i < rows; i++)
			{
				cout << setw(4) << arr[i][j];
			}
			cout << endl;
		}
	}
};


int main()
{
	Mass First;
	First.ArrayFill();
	First.ArrayChange();

	return 0;
}