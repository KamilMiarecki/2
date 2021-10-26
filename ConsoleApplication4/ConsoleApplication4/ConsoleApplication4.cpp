// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{	/*zad1
	float a, b, x ;
	cout << "podaj a "; cin >> a;
	cout << "podaj b "; cin >> b;

	if (a == 0)
		cout << " nie istnieje " << endl;
	else
	{
		x = -b / a;
		cout << "x wynosi: " << x << endl;
	}*/


	//zad2
	/*float a, b, c, x, delta;
	cout << "podaj a "; cin >> a;
	cout << "podaj b "; cin >> b;
	cout << "podaj c "; cin >> c;
	delta= b*b-4*a*c;
	if (a == 0)
	{
		x = -b / a;
		cout << "1 rozwiazanie  " << endl;
	}
	else if (delta ==0)
	{
		cout << " 1 rozwiazanie " << endl;
	}
	else
	{
	cout << "2 rozwiazania " << endl;
	}*/
	//zad3
	/*float a, b, c, x, x1,x2,delta;
	cout << "podaj a "; cin >> a;
	cout << "podaj b "; cin >> b;
	cout << "podaj c "; cin >> c;
	delta = (b * b) - (4 * a * c);
	if (a == 0)
	 {
		x = -c / b;
		cout << "1 rozwiazanie x i wynosi:   " << x <<  endl;
	}

	else
	{
		if (delta == 0)
		{
			x1 = -b / 2 * a;
			cout << "x1 wynosi: " << x1 << endl;
		}
		else if (delta < 0)
			cout << "brak rozwiazania" << endl;

	else
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2= (-b + sqrt(delta)) / (2 * a);
		cout << "x1 wynosi: " << x1 << endl;
		cout << "x2 wynosi: " << x2 << endl;
	}
	}*/
	//zad4a
	/*float x;
	cout << "podaj x ";
	cin >> x;
	if (x>0)
	{
		cout << 2 * x<< endl;
	}
	else if (x == 0)
	{
		cout << "0" << endl;
	}
	else if (x < 0)
	{
		cout << -3 * x << endl;
	}*/
	//zad4b
	/*float x;
	cout << "podaj x ";
	cin >> x;
	if (x>=1)
	{
		cout << x * x << endl;
	}
	else if (x < 1)
	{
		cout << x << endl;
	}*/

	//zad4c
	//float x;
	//cout << "podaj x ";
	//cin >> x;

	//if (x > 2)
	//{
	//	cout << 2 + x << endl;
	//}
	//else if (x == 2)
	//{
	//	cout << "8" << endl;
	//}
	//else if (x < 2)
	//{
	//	cout << x-4 << endl;
	//}
	//zad5
	/*float a, b, c,max,srednia,min ;
	cout << "podaj a ";
	cin >> a;
	cout << "podaj b ";
	cin >> b;
	cout << "podaj c ";
	cin >> c;
	if (a > b && a > c)
	{
		max = a;
		if (b < c && b < a)
		{
			min = b;
		}
		else
			min = c;

		if (max == a && min == b)
		{
			srednia = c;
		}
		else
			srednia = b;

	}
	else if (b > c && b > a)
	{
		max = b;
		if (a < c && a < b)
		{
			min = a;
		}
		else
			min = c;

		if (max == b && min == a)
		{
			srednia = c;
		}
		else
			srednia = a;

	}
	else 
	{
		max = c;
		if (a < c && a < b)
		{
			min = a;
		}
		else
			min = b;

		if (max == c && min == a)
		{
			srednia = b;
		}
		else
			srednia = a;
	}
	cout << min << "|" << srednia << "|" << max;*/

	//zad6
	//a=1 pada deszcz, b=1 jest autobus 
	/*int a, b;
	cout << "podaj informacje o tym czy pada " << endl;
	cin >> a;
	cout << " czy jest autobus " << endl;
	cin >> b;
	cout << endl;
	if (a == 1 && b == 1)
		cout << "wez parasol " << "Dostaniesz sie na uczelnie";
	else if (a == 1 && b == 0)
		cout << "Nie dostaniesz sie na uczelnie";
	else if (a == 0 && b == 1)
		cout << "Dostaniesz sie na uczelnie " << "Milego dnia i pieknej pogody";
	else
		cout << "blad danych";*/

	//zad7
	//a=1 znizka na samochod, b=1 podwyzka
	/*int a, b;
	cout << " podaj informacje o tym czy jest znizka na samochod " << endl;
	cin >> a;
	cout << " czy otrzymales podwyzke" << endl;
	cin >> b;
	if (a == 0 || b == 1)
	{
		cout << "Mozesz kupic samochod " << "Znizki na samochod nie ma " << endl;
		
	}
	if (a == 0 || b == 0)
	{
		cout << "Zakup samochodu trzeba odlozyc na pozniej..." << "Znizki na samochod nie ma" << endl;
		
	}
	if (a == 1 || b == 1)
	{
		cout << "Mozesz kupic samochod !" << endl;
		
	}*/



}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
