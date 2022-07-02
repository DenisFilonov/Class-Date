#include "Product.h"

Product::Product(const char* _title, float _price, int _amount)
{
    int size = strlen(_title) + 1;
    title = new char[size];
    strcpy_s(title, size, _title);
    price = _price;
    amount = _amount;
}

Product::~Product()
{
    if (title != NULL) delete[] title;
}

Product::Product(const Product& obj)
{
    int size = strlen(obj.title) + 1;
    this->title = new char[size];
    strcpy_s(this->title, size, obj.title);

    this->price = obj.price;
    this->amount = obj.amount;
}

Product& Product::operator=(const Product& obj)
{
    int size = strlen(obj.title) + 1;
    this->title = new char[size];
    strcpy_s(this->title, size, obj.title);

    this->price = obj.price;
    this->amount = obj.amount;
    return *this;
}

void Product::showInfo() const
{
    cout << "\n=====================================";
    cout << "\nНазвание товара: " << title;
    cout << "\nЦена товара: " << price;
    cout << "\nКоличество товара в наличии: " << amount;
    cout << "\n=====================================\n\n";
}

Product Product::operator+(Product obj)
{
    Product tmp;

    if (strcmp(this->title, obj.title) == 0 && this->price == obj.price)
    {
        tmp = *this;
        tmp.amount += obj.amount;
    }
    else
    {
        tmp = *this;// можно и obj
    }

    return tmp;
}

Product Product::operator+(int n)
{
    Product tmp = *this;
    tmp.amount += n;
    //tmp.price++;
    return tmp;
}

Product Product::operator+(double p)
{
    //можно и свичи тут наделать
    Product tmp = *this;
    tmp.price += p;
    return tmp;
}
