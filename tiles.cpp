// tiles.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Tiles {
public:Tiles(string brand, int size_h, int size_w, int price)
{
	this->brand = brand;
	this->size_h = size_h;
	this->size_w = size_w;
	this->price = price;
}
	   string brand;
	   int size_h, size_w, price;
	   void getData() {
		   cout << "brand" << brand << endl;
		   cout << "size_h" << size_h << endl;
		   cout << "size_w" << size_w << endl;
		   cout << "price" << price << endl;
	   }
};
int main()
{
	Tiles Floor("floor", 29, 15, 25);
	Floor.getData();
	Tiles laminate("lamin", 10, 20, 30);
	laminate.getData();
}