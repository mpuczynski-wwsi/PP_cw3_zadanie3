#include<stdio.h>
#include<math.h>
#include <iostream>

using namespace std;

double sr_a(double x, double y) {
	return (x + y) / 2;
}

double sr_g(double x, double y) {
	return sqrt(x * y);
}

double sr_h(double x, double y) {
	return 2.0 / ((1 / x) + (1 / y));
}

double sr_p(double x, double y) {
	return sqrt((x * x + y * y)/ 2.0);
}

int main() {
	double wynik, liczba1, liczba2;
	int flaga = 1;
	char wybor = ' ';
	cout << "jaka srednia obliczyc?";
	cout << "\n\ta - artmetyczna\n\tg - geometryczna\n\th - harmoniczna\n\tp - potegowa\n> ";
	cin >> wybor;
	cout << "\npodaj 2 liczby ";
	cin >> liczba1 >> liczba2;
	switch (wybor)
	{
	case 'a':
		wynik = sr_a(liczba1, liczba2);
		break;
	case 'g':
		wynik = sr_g(liczba1, liczba2);
		break;
	case 'h':
		wynik = sr_h(liczba1, liczba2);
		break;
	case 'p':
		wynik = sr_p(liczba1, liczba2);
		break;
	default:
		flaga = 0;
		break;
	}
	if (!flaga) {
		cout << "\nbledne dane - nie mozna wykonac obliczen";
	} else {
		cout << "\nwynik = " << wynik;
	}

}