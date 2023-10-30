#pragma once
#include<iostream>
using namespace std;

class Wektor {
private:
	int max_size = 100;
	int current_size;
	double tab[100];
public:
	Wektor(int size);
	void wpisz(int i, double x);
	void rozmiar();
	const double podaj(int index) const;
	Wektor& dodaj(Wektor& w);
	Wektor& operator +=(const Wektor& p);
	Wektor& operator -=(const Wektor& p);
	Wektor operator =(const Wektor& p);
	double& operator[](int index);
	friend Wektor operator +(const Wektor& p1, const Wektor& p2);
	friend ostream& operator <<(ostream& cout, const Wektor& p);
	friend Wektor operator ! (Wektor& wektor);
	friend Wektor operator - (const Wektor& p1, const Wektor& p2);
};

