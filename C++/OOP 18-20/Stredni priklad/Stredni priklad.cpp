/*

Vytvořte program, který najde všechny pátky 13. mezi dvěma zadanými
daty. Uživatel nejdříve nastaví časové rozmezí, ve kterém chce pátky
13. hledat. Program poté vyhledá všechny pátky 13. v tomto období.

Ukázka obrazovky programu:

Konzolová aplikace
Zadejte datum od jako dd.mm.yyyy: 1.1.2010
Zadejte datum do jako dd.mm.yyyy: 1.1.2018
Patky 13.
Fri Aug 13 2010
Fri May 13 2011
Fri Jan 13 2012
Fri Apr 13 2012
Fri Jul 13 2012
Fri Sep 13 2013
Fri Dec 13 2013
Fri Jun 13 2014
Fri Feb 13 2015
Fri Mar 13 2015
Fri Nov 13 2015
Fri May 13 2016
Fri Jan 13 2017
Fri Oct 13 2017


*/
#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include <ctime>
#include <chrono>

using namespace std::chrono;
using namespace std;

int main()
{
	char tmp;

	time_t ted = time(NULL);
	tm odData = *localtime(&ted);
	tm doData = *localtime(&ted);



	cout << "Zadejte datum do jako dd.mm.yyyy: ";
	cin >> odData.tm_mday >> tmp >> odData.tm_mon >> tmp >> odData.tm_year;
	cout << "Zadejte datum do jako dd.mm.yyyy: ";
	cin >> doData.tm_mday >> tmp >> doData.tm_mon >> tmp >> doData.tm_year;

	odData.tm_year -= 1900;
	doData.tm_year -= 1900;

	while (mktime(&odData) != mktime(&doData))
	{
		if (odData.tm_mday == 13 && odData.tm_wday == 5)
			cout << asctime(&odData);
		odData.tm_mday++;
		
		tm modifikace = odData;
		time_t upraveno = mktime(&odData);
		odData = *localtime(&upraveno);

	}


	cin.get();
	cin.get();







	return 0;
}

