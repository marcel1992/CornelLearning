// Agenda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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

	cout << "Introduceti numele:\n";
	cin >> agenda.Name;
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

