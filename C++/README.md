# C++

# 1. Agenda - console

	Trebuie creata o aplicatie tip consola in limbajul C++, aplicatie care trebuie sa ofere posibilitatea de a crea o agenda si de a o afisa in consola.
	Pentru aceasta implementare este nevoie de utilizarea claselor.
	Trebuie respectate urmatoarele:
		- clasa sa se numeasca Agenda
		- sa contina urmatoarele proprietati (aici ma refer la cele cu public si private):
			- nume
			- prenume
			- data nastere
			- gen (masculin sau feminin - asta inseamna ca trebuie sa verifici cand utilizatorul introduce valori pentru acest camp sa permiti sa scrie doar masculin sau feminin)
			- adresa
			
	Pseudocod:
	
	class Agenda
	{
		string Name;
		string Surname;//prenume
		DateTime BirthDate; //data nastere
		string Gender;//gen
		string Address; //adresa
	}
		

	Trebuie de mentionat si faptul ca numele proprietatilor sa fie in engleza. Unde nu stii cauti pe google sau ma intrebi :))
	
	Exemplu comportament:
	
	Se deschide aplicatioa consola si pe ecran va fi afisat mesajul:
	
	Incepe crearea agendei:
	
	Introduceti nume:
	//citesti numele si pui in variabila nume
	Introduceti prenume:
	//la fel ca sus
	Introduceti data nastere:
	//
	Introduceti gen:
	//
	Introduceti adresa
	//
	
	si la sfarsit afisezi:
	
	Agenda creata:
	Nume:numele introdus
	Prenume:
	Data nastere:
	Gen:
	Adresa: