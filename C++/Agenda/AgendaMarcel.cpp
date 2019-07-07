// Agenda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

using namespace std;

class Agenda
{
public:
	string Name;
	string Surname;
	int Year;//TODO change with datetime
	string Gender;
	string Address;
};

int main()
{
	Agenda agenda;
	string rawYear; //an citit sub form de string
	string rawName; // nume citit fara a verifica daca are numere
	bool isDigit; //verificam daca este numar sau nu


	// pun partea asta intr-un do...while deoarce eu trebuie sa cer utilizatorului sa introduca numele corect fara numere 
	do
	{
		cout << "Introduceti numele:\n";
		cin >> rawName;

		/* functia any_of primeste 3 parametri
			1. De la primul caracter sa inceapa verificare
			2. Ultimul caracter pana la care sa faca verficarea
			3. Ce valoarea sa intoarca, in cazul de fata acel isdigit va intoarce true sau false pentru ca verifica daca sunt numere sau nu

		*/
		isDigit = any_of(rawName.begin(), rawName.end(), ::isdigit);

	} while (isDigit == true);//iese din bucla asta cand isDigit = false, adica cand nu sunt introduse numere in rawName

	agenda.Name = rawName;

	cout << "Introduceti prenumele:\n";
	cin >> agenda.Surname;
	cout << "Introduceti varsta:\n";
	cin >> rawYear;
	cout << "Introduceti gen:\n";
	cin >> agenda.Gender;
	cout << "Introduceti adresa:\n";
	cin >> agenda.Address;

	agenda.Year = std::atoi(rawYear.c_str());//conversia de la string la int, daca stringul contine litere numarul intreg va fi 0

	cout << "\nDatele introduse sunt: ";
	cout << "\n";
	cout << "\n";
	cout << "Numele: ";
	cout << agenda.Name;
	cout << "\n";
	cout << "Prenumele: ";
	cout << agenda.Surname;
	cout << "\n";
	cout << "Varsta: ";
	cout << agenda.Year;
	cout << "\n";
	cout << "Genul: ";
	cout << agenda.Gender;
	cout << "\n";
	cout << "Adresa: ";
	cout << agenda.Address;

	cout << "\n";

	return 0;
}

