#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{

    // Operatii de baza cu stringuri--------------------------------------------------------------
    string s = "bacalaureat";

    s.length(); // sau s.size() — lungimea
    s.empty(); // true daca sir gol
    s[0]; // primul caracter: 'b'
    s.at(2); // cu verificare bounds: 'c'
    s.front() s.back(); // primul / ultimul caracter
    s += " info"; // concatenare
    s.append(" info"); // echivalent
    s.push_back('!'); // adauga un caracter la final

    cout << s << endl; // afiseaza sirul // "bacalaureat info info!"


    //substr, find, replace--------------------------------------------------------------
    string s = "informatica";

    // Subsir: substr(pozitie, lungime)
    string sub = s.substr(0, 5); // "infor"
    string sf = s.substr(5); // "matica"

    // Cautare
    int poz = s.find("mat"); // 5 (sau string::npos)
    if (poz != string::npos)
        cout << "gasit la " << poz;

    // Înlocuire: replace(poz, lungime, text_nou)
    s.replace(0, 5, "INFOR"); // "INFORmatica"

    //erase, insert, compare---------------------------------------------------------------
    string s = "abcdef";

    // Stergere: erase(poz, lungime)
    s.erase(2, 2); // sterge 2 caractere de la poz 2

    // s = "abef"
    // Inserare: insert(poz, text)
    s.insert(2, "XY"); // s = "abXYef"

    // Comparare (ca strcmp)
    string a = "ana", b = "ion";
    if (a == b) cout << "egale";
    if (a < b) cout << a << " < " << b << endl;
    if (a.compare(b) < 0) cout << a << " < " << b << endl;

    //Conversii string <-> int---------------------------------------------------------------
    string s = "42";
    int n = stoi(s); // 42
    long l = stol(s);
    double d = stod("3.14");
    // Numar -> string
    string t = to_string(42); // "42"
    string f = to_string(3.14); // "3.140000"

    cout << t << endl;

    return 0;
}

