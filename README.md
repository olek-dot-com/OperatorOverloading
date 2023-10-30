# Operator overloading
English below.
# Zadanie: 

Napisz klasę Wektor, przechowującą tablicę liczb rzeczywistych o rozmiarze MAX_ROZMIAR równym 100 (zmienna prywatna) oraz zmienną prywatną przechowującą informację o aktualnej liczbie elementów przechowywanych w tablicy. Klasa Wektor powinna udostępniać następujące metody: <br />
<b>Konstruktor</b> - przyjmujący w argumencie rozmiar tworzonego wektora (liczba z przedziału od 1 do 100) i nadający tablicy początkowe wartości równe 0. Rozmiar raz zainicjalizowanego wektora nie może ulec zmianie.<br />
<b>podaj</b> - zwracającą element tablicy znajdujący się pod indeksem „indeks” przekazanym jako argument funkcji (w przypadku wyjścia poza zakres wektora, funkcja zwraca jego pierwszy element)<br />
<b>wpisz</b> - przyjmującą w argumencie liczbę naturalną „indeks” oraz liczbę rzeczywistą „wartosc” i ustawiającą wartość elementu tablicy o indeksie „indeks”. Jeśli podany indeks wychodzi poza zakres wektora to funkcja nie robi nic.<br />
<b>rozmiar</b> - zwracającą rozmiar wektora <br />
<b>dodaj</b> - przyjmującą w argumencie referencję do obiektu typu Wektor, dodającą do tablicy z klasy Wektor wartości tablicy z argumentu funkcji (jeśli jest ich mniej to dodajemy wszystkie, a jeśli jest ich więcej to dodajemy tylko tyle elementów ile jest w tablicy należącej do obiektu, na którym wywoływana jest metoda).<br />
Dodatkowo dla klasy Wektor przeciąż następujące operatory:<br />
<b>opeartor +=</b> -> przeciążenie za pomocą metody w klasie -> realizuje dodawanie dwóch wektorów - działanie analogiczne do funkcji dodaj. Rozmiar wektora na którym przeprowadzane jest dodawanie nie zmienia się.<br />
<b>operator -=</b> -> przeciążenie za pomocą metody w klasie -> realizuje odejmowanie dwóch wektorów. Odejmowanie wykonywane jest tyle razy ile elementów posiada mniejszy wektor z odjemnej i odjemnika. Rozmiar wektora na którym przeprowadzane jest odejmowanie nie zmienia się.<br />
<b>opearator = </b>->przeciążenie za pomocą metody w klasie -> przepisanie wartości z wektora drugiego do pierwszego. Po wykonaniu przypisania wektor nadpisywany będzie miał rozmiar i wartości wektora z prawej strony przypisania.<br />
<b>operator []</b> -> przeciążenie za pomocą metody w klasie -> dostęp do i-tego elementu wektora z możliwością jego nadpisania (w przypadku wyjścia poza zakres tablicy, funkcja zwraca jej pierwszy element).<br />
<b>operator + </b>-> przeciążenie za pomocą metody globalnej -> realizuje dodawanie dwóch wektorów - działanie analogiczne do funkcji dodaj i operatora +=. Rozmiar wektora wynikowego jest taki sam jak rozmiar pierwszego składnika sumy.<br />
<b>operator <<</b> -> przeciążenie za pomocą metody globalnej -> wypisujący zawartość wektora w postaci: [1 4 7  … 2]<br />
<b>operator !</b> -> przeciążenie za pomocą metody globalnej -> zwracający wektor liczb o przeciwnych znakach<br />
<b>operator -</b> -> przeciążenie za pomocą metody globalnej -> realizuje odejmowanie dwóch wektorów. Wektor wynikowy przyjmuje rozmiar wektora będącego odjemną w przeprowadzanej operacji odejmowania. Działanie analogiczne do operatora -=.<br />

Na poniższym rysunku przedstawiono prosty przykład operacji dodawania i odejmowania przeprowadzonego na dwóch obiektach klasy Wektor.
![image](https://github.com/olek-dot-com/OperatorOverloading/assets/120317212/d7729c3d-b0ac-442d-9333-ded57f7c128b)

# Task:
Write a Vector class, storing an array of real numbers with a size of MAX_ROZE equal to 100 (private variable) and a private variable storing information about the current number of elements stored in the array. The Vector class should provide the following methods:<br/>
<b>Constructor</b> - taking as an argument the size of the vector being created (a number between 1 and 100) and giving the array an initial value equal to 0. The size of the vector once initialized cannot be changed. <br />
<b>podaj</b> - returning the element of the array located under the index "index" passed as an argument to the function (if you go outside the range of the vector, the function returns its first element)<br />
<b>wpisz</b> - taking a natural number "index" and a real number "value" as an argument and setting the value of the array element at index "index". If the given index goes outside the range of the vector then the function does nothing.<br />
<b>rozmiar</b> - returning the size of the vector <br />
<b>dodaj</b> - accepting in the argument a reference to an object of the Vector type, adding to the array of the Vector class the values of the array from the argument of the function (if there are fewer of them, we add all of them, and if there are more of them, we add only as many elements as there are in the array belonging to the object on which the method is called).<br />
In addition, for the Vector class overload the following operators:<br/>
<b>opeartor +=</b> -> overloading with a method in the class -> implements the addition of two vectors - operation analogous to the add function. The size of the vector on which the addition is performed does not change.<br />
<b>operator -=</b> -> overloading with a method in class -> realizes subtraction of two vectors. Subtraction is performed as many times as the number of elements the smaller vector has from the subtractor and subtractor. The size of the vector on which the subtraction is performed does not change.<br />
<b>opearator =</b> ->overload using a method in the class -> rewrite the value from the second vector to the first. When the assignment is performed, the overridden vector will have the size and values of the vector to the right of the assignment.<br />
<b>operator []</b> -> overloading using a method in the class -> accessing the i-th element of the overridable vector (if you go outside the range of the array, the function returns its first element).<br />
<b>operator +</b> -> overloaded with a global method -> implements the addition of two vectors - operation analogous to the add function and the += operator. The size of the resulting vector is the same as the size of the first component of the sum.<br />
<b>operator <<</b> -> overloaded by global method -> prints out the contents of a vector in the form: [1 4 7 ... 2]<br />
<b>operator !</b> -> overload using the global method -> returning a vector of numbers with opposite signs. <br />
<b>operator -</b> -> overload via global method -> realizes subtraction of two vectors. The resulting vector takes the size of the vector that is the subtractor in the subtraction operation being performed. The operation is analogous to the -= operator.<br />

The following image shows a simple example of an addition and subtraction operation performed on two objects of the Vector class.
![image](https://github.com/olek-dot-com/OperatorOverloading/assets/120317212/50b6d0ba-3636-4e06-8f3b-bca1ff168f15)
