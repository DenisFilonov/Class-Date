#include "Product.h"
#include "Date.h"
#include <Windows.h>

int main()
{
	setlocale(NULL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Product d, b("Лёд", 3.7, 7);
	Product k("Лёд", 3.7, 3);

	d.showInfo();
	b.showInfo();

	Product f1 = b + k; //("Лёд", 3.7, 10); "+" - перегруженный оператор/бирюзового цвета
	Product f2 = b + d; //мы вернули всего-лишь инфу.
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	f1.showInfo();
	f2.showInfo();

	float p = 11.13;
	Product f3 = d + p;		// + double => price || float
	Product f4 = d + 12;		// + int => amount
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	f3.showInfo();
	f4.showInfo();*/


	Date a, b(2022, 6, 22), c(1995, 6, 6);
	a.showDate();
	b.showDate();
	c.showDate();

	int value = 5;

	cout << (a == b ? "\nРавны\n\n" : "\nНе равны\n\n");
	cout << (a == c ? "\nРавны\n\n" : "\nНе равны\n\n");
	cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << (a >= c ? "\nРавны\n\n" : "\nНе равны\n\n");
	cout << (a <= c ? "\nРавны\n\n" : "\nНе равны\n\n");
	cout << (b <= c ? "\nРавны\n\n" : "\nНе равны\n\n");
	cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

	a += value;
	a.showDate();
	b -= value;
	b.showDate();
	cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

	Date f = c + value;
	c.showDate();
	f.showDate();

	Date d = b - value;
	b.showDate();
	d.showDate();

	return 0;
}