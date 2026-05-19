#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int main()
{
    //Citire din fisier text -----------------------------------
    string s;
    fin >> s;

    // Citire linie intreaga
    string linie;
    getline(fin, linie);

    // Citire tot fisierul linie cu linie
    while (getline(fin, linie))
        fout << linie << "\n";
    fin.close(); fout.close();

    //Formatare output — setw, setfill -----------------------------------
    cout << setw(10) << "Ana"; // aliniat dreapta, 10 car
    cout << left << setw(10) << "Ana"; // aliniat stanga
    cout << setfill('0') << setw(5) << 42; // "00042"

    // Afisare cu 2 zecimale:
    cout << fixed << setprecision(2) << 3.14159;
    // Output: 3.14

    return 0;
}


