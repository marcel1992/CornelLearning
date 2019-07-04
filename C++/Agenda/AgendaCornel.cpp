#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	class Agenda
	{
	public:
		/*
			string Name;  // nume
			string Surname;//prenume
			int BirthDate; //data nastere
			string Gender;//gen
			string Address; //adresa
		 */

		string Nume;
		double Ani;
		string gen;

		void type()
		{
			cout << "Introdu numele tau: ";
			cin >> Nume;

			cout << "\nIntrodu ani tai: ";
			cin >> Ani;

			cout << "\nMasculin/Feminin/Neutru\nCare este genul tau: ";
			cin >> gen;

			cout << "\nDatele tale sunt: ";
			cout << "\n";
			cout << "\n";
			cout << "Numele: ";
		cout << Nume;
		cout << "\n";
		cout << "Ani: ";
		cout << Ani;
		cout << "\n";
		cout << "Genul: ";
		cout << gen;

		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		}
	};
		
	
	Agenda nume;

	nume.type();

	cin.get();
	return 0;
}


