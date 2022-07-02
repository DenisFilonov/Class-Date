#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Product
{
	char* title;
	float price;
	int amount;

public:
	Product(const char* _title = "Commodity_name", float _price = 20, int _amount = 10);
	~Product();
	Product(const Product& obj);	//конструктор копирования
	Product& operator = (const Product& obj); //оператор присвоения

	void showInfo() const;
	
	Product operator + (Product obj); // = this + obj
	Product operator + (int n); // = this + int
	Product operator + (double p); // = this + double
};

