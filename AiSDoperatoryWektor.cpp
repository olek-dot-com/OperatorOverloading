#include <iostream>
#include"wektor.h"

using namespace std;


Wektor operator+(const Wektor& w1, const Wektor& w2) {
    Wektor wynik(w1.current_size);
    int additon_size = min(w1.current_size, w2.current_size);
    for (int i = 0; i < additon_size; ++i) {
        wynik.tab[i] = w1.podaj(i) + w2.podaj(i);
    }
    return wynik;
}
Wektor operator-(const Wektor& w1, const Wektor& w2) {
    Wektor wynik(w1.current_size);
    int addition_size = min(w1.current_size, w2.current_size);
    for (int i = 0; i < w1.current_size; i++)
    {
        wynik.tab[i] = w1.podaj(i) - w2.podaj(i);
    }
    return wynik;
}
ostream& operator<< (ostream& cout, const Wektor& p) {
    cout << "[";
    for (int i = 0; i < p.current_size - 1; i++) {
        cout << p.tab[i] << " ";
    }

    cout << p.tab[p.current_size - 1] << "]";
    return cout;
}
Wektor operator!(Wektor& wektor) {
    Wektor w2(wektor.current_size);
    for (int i = 0; i < wektor.current_size; i++) {
        w2.tab[i] = wektor.tab[i] * (-1);
    }
    return w2;
}

int main()
{
    int n1, n2;
    cout << "n1="; cin >> n1;
    Wektor w1(n1);
    cout << "w1=";
    double x;
    for (int i = 0; i < n1; ++i)
    {
        cin >> x;
        w1.wpisz(i, x);
    }

    cout << "n2="; cin >> n2;
    Wektor w2(n2);
    cout << "w2=";
    for (int i = 0; i < n2; ++i)
    {
        cin >> x;
        w2[i] = x;
    }

    Wektor w3(10), w4(10);

    w3 = w1;
    w4 = w1 + w2;

    cout << "w1=" << w1 << endl;
    cout << "w2=" << w2 << endl;
    cout << "w3=w1=" << w3 << endl;
    cout << "w4=w1+w2" << w4 << endl;
    cout << "!w1=" << !w1 << endl;
    cout << "w1+w4" << w1 + w4 << endl;
    cout << "w1-w4" << w1 - w4 << endl;

    w3.dodaj(w4);
    cout << "w3+=w4 ->" << w3 << endl;
    cout << "w2+=w3 ->" << (w2 += w3) << endl;
    cout << "w1-=w2 ->" << (w1 -= w2) << endl;
}