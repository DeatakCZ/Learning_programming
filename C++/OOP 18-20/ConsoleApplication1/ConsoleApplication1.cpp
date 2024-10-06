

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
int main()
{
    fstream soubor("zapis.txt", ios::out);
    soubor << "Hello World!" << endl;

    soubor.close();

    cin.get();
    return 0;
}

*/

int main()
{


    fstream soubor("zapis.txt");

    string slovo;
    soubor >> slovo;
    cout << slovo << endl;
    soubor.close();

    cin.get();
    return 0;
}