#include "wektor.h"
#include <iostream>

Wektor::Wektor(int size) {
	this->current_size = size;
	for (int i = 0; i < max_size; i++) {
		tab[i] = 0.0;
	}
}

const double Wektor::podaj(int index) const {
	if (index < 100 && index >= 0) {
		return this->tab[index];
	}
	else {
		return this->tab[0];
	}
}
void Wektor::rozmiar() {
	cout << this->current_size;
}
void Wektor::wpisz(int i, double val) {
	if (i < 100 && i >= 0) {
		tab[i] = val;
	}
}
Wektor& Wektor::dodaj(Wektor& p) {
	for (int i = 0; i < this->current_size; i++) {
		this->tab[i] += p.tab[i];
	}
	return *this;
}
Wektor& Wektor::operator+=(const Wektor& p) {
	int addition_size = std::min(this->current_size, p.current_size);
	for (int i = 0; i < addition_size; i++) {
		this->tab[i] += p.tab[i];
	}
	return *this;
}

Wektor& Wektor::operator-=(const Wektor& p) {
	int addition_size = std::min(this->current_size, p.current_size);
	for (int i = 0; i < addition_size; i++) {
		this->tab[i] -= p.tab[i];
	}
	return *this;
}
double& Wektor::operator[](int index)
{
	if (index >= 0 && index < current_size) {
		return  tab[index];
	}
	else
	{
		return tab[0];
	}

}
Wektor Wektor::operator=(const Wektor& p) {
	this->current_size = p.current_size;
	for (int i = 0; i < p.max_size; i++) {
		if (i < p.current_size) {
			this->tab[i] = p.tab[i];
		}
		else {
			this->tab[i] = 0;
		}
	}
	return *this;
}

