// ConsoleApplication28.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Children
{
private:
	int age;
	string name;
	string surname;

public:
	void setData(string name1, string surname1, int age1)
	{
		name = name1;
		surname = surname1;
		age = age1;

		
	}
	void getData()
	{
		cout << name << " " << surname << " " << age << " " << endl;
	}
	};
	int main()
	{
		int age;
		string name;
		string surname;
		cout << "enter information:name,surname,age" << endl;
		cin >> name;
		cin >> surname;
		cin >> age;
		Children Group;
		Group.setData(name, surname, age);
		Group.getData();
		system("pause");
		return 0;


	}


