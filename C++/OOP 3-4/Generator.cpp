
#include "Generator.h"

Generator::Generator()
{
	/*
	for (int y = 0; y < 5; y++)
	{
		for (int i = 0; i < 7; i++)
		{

			switch(i)
			{
			case 0:
				switch(y)
				{
				case 0: prvniSlova[i][0] = "Tlusty "; cout << &prvniSlova[0][0]<<endl; break;
				case 1: druheSlova[i][0] = "horolezec "; cout << " 0;1 "; break;
				case 2: tretiSlova[i][0] = "malo "; cout << " 0;2 "; break;
				case 3: ctvrteSlova[i][0] = "programoval "; cout << " 0;3 "; break;
				case 4: pateSlova[i][0] = "ve sklepe"; cout << " 0;4 "; break;
				};
			case 1:
				switch(y)
				{
				case 0: prvniSlova[i][0] = "Maly "; cout <<i << " "<<y<<(prvniSlova[1][0]); cout << prvniSlova[0][0] << endl; break;
				case 1: druheSlova[i][0] = "postak "; break;
				case 2: tretiSlova[i][0] = "pomalu "; break;
				case 3: ctvrteSlova[i][0] = "pocital "; break;
				case 4: pateSlova[i][0] = "ve sklepe"; break;
				};
			case 2:
				switch (y)
				{
				case 0: prvniSlova[i][0] = "Rychly "; break;
				case 1: druheSlova[i][0] = "programator "; break;
				case 2: tretiSlova[i][0] = "nerad "; break;
				case 3: ctvrteSlova[i][0] = "jezdil "; break;
				case 4: pateSlova[i][0] = "ve meste"; break;
				};
			case 3:
				switch (y)
				{
				case 0: prvniSlova[i][0] = "Nejlepsi "; break;
				case 1: druheSlova[i][0] = "elektrikar "; break;
				case 2: tretiSlova[i][0] = "rychle "; break;
				case 3: ctvrteSlova[i][0] = "cetl "; break;
				case 4: pateSlova[i][0] = "na strese"; break;
				};
			case 4:
				switch (y)
				{
				case 0: prvniSlova[i][0] = "Nejhorsi "; break;
				case 1: druheSlova[i][0] = "dinosaurus "; break;
				case 2: tretiSlova[i][0] = " "; break;
				case 3: ctvrteSlova[i][0] = "cetl "; break;
				case 4: pateSlova[i][0] = "na strese"; break;
				};
			case 5:
				switch (y)
				{
				case 0: prvniSlova[i][0] = "Modry "; break;
				case 1: druheSlova[i][0] = "alkoholik "; break;
				case 2: tretiSlova[i][0] = " "; break;
				case 3: ctvrteSlova[i][0] = "behal "; break;
				case 4: pateSlova[i][0] = "doma"; break;
				};
			case 6:
				switch (y)
				{
				case 0: prvniSlova[i][0] = "Automatizovany "; break;
				case 1: druheSlova[i][0] = "doktor "; break;
				case 2: tretiSlova[i][0] = " "; break;
				case 3: ctvrteSlova[i][0] = "psal "; break;
				case 4: pateSlova[i][0] = "ve vsi"; break;
				};
			};
		}*/
	/*
	string prvniSlova = ("Tlusty", "Maly ", "Rychly ", "Nejlepsi ", "Nejhorsi ", "Modry ", "Automatizovany ");					//7
	string druheSlova[] = { "horolezec ", "postak ", "programator ", "elektrikar ", "dinosaurus ", "alkoholik ", "doktor " };			//7
	string tretiSlova[] = { "malo ", "pomalu ", "nerad ", "rychle " };																//4
	string ctvrteSlova[] = { "programoval ", "pocital ", "jezdil ", "cetl ", "behal ", "psal " };										//6
	string pateSlova[] = { "ve sklepe", "u babicky", "ve meste", "na strese", "doma", "ve vsi" };									//6

	*/
	srand(time(NULL));
}

Generator::~Generator()
{

}

void Generator::prvniSlovo()
{
	cout << prvniSlova[(rand()%6)];
}

void Generator::druheSlovo()
{
	cout << druheSlova[(rand()%6)];
}

void Generator::tretiSlovo()
{
	cout << tretiSlova[(rand()%3)];
}

void Generator::ctvrteSlovo()
{
	cout << ctvrteSlova[(rand() % 5)];
}

void Generator::pateSlovo()
{
	cout << pateSlova[(rand() % 5)];
}