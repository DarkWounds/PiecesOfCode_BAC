#include <cstring>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    // Parcurgere caracter cu caracter -----------------------------------------------
    string s = "Bac Info 2025";

    // Clasic cu index
    for (int i = 0; i < s.length(); i++)
        cout << s[i] << " ";

    // Range-based for (C++11)
    for (char c : s)
        cout << c << " ";

    // Cu pointer (pe char[])
    char v[] = "salut";
    for (char* p = v; *p; p++)
        cout << *p;

    // Verificari pe caractere ------------------------------------------------
    char c = 'A';

    isalpha(c); // litera (A-Z, a-z)
    isdigit(c); // cifra (0-9)
    isalnum(c); // litera sau cifra
    isupper(c); // litera mare
    islower(c); // litera mica
    isspace(c); // spatiu, tab, newline
    toupper(c); // converteste la majuscula
    tolower(c); // converteste la minuscula

    // Exemplu: transforma tot la lowercase
    for (char& c : s) c = tolower(c);

    //Numarare vocale / consoane / cifre ------------------------------------------------

    string s = "Info2025";
    int vocale=0, consoane=0, cifre=0;
    string voc = "aeiouAEIOU";
    for (char c : s) {
        if (isdigit(c)) cifre++;
        else if (voc.find(c) != string::npos)
            vocale++;
        else if (isalpha(c))
            consoane++;
    }

    //Verificare / Construire palindrom ------------------------------------------------

    // Metoda 1: doi indici
    string x = "radar";
    int st = 0, dr = x.size() - 1;
    bool estePalindrom = true;
    while (st < dr)
        if (x[st++] != x[dr--])
        {
            cout << "NU";
            st = dr + 1; // iesim din bucla
            estePalindrom = false;
        }
    if (estePalindrom) cout << "Palindrom";


    // Metoda 2: comparare cu reversul
        string r = x;
        reverse(r.begin(), r.end());
        cout << (x == r ? "Palindrom" : "NU") << endl;

    //Anagrama si frecventa literelor ------------------------------------------------
    string a = "listen", b = "silent";
    int freq[256] = {0};
    for (char c : a) freq[c]++;
    for (char c : b) freq[c]--;
    bool anagrame = true;
    for (int i = 0; i < 256; i++)
        if (freq[i] != 0)
        {
            anagrame = false;
            break;
        }
    cout << (anagrame ? "Anagrame" : "NU") << endl;

    return 0;
}

