#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Elimina spatii multiple
string compacteaza(string s) {
    string rez = "";
    bool spatiu = false;
    for (char c : s) {
        if (isspace(c)) { spatiu = true; }
        else {
            if (spatiu && !rez.empty()) rez += ' ';
            rez += c;
            spatiu = false;
        }
    }
    return rez;
}

// Inlocuieste toate aparitiile unui substring cu altul.
string replaceAll(string s, string vechi, string nou) {
    int poz = s.find(vechi);
    while (poz != string::npos) {
        s.replace(poz, vechi.length(), nou);
        poz = s.find(vechi, poz + nou.length());
    }
    return s;
}
// Exemplu:
// replaceAll("ana are ana", "ana", "ion")
// -> "ion are ion"


// Cel mai lung cuvânt dintr-un text -----------------------------------
string celMaiLung(string text) {
    stringstream ss(text);
    string cuv, maxCuv = "";
    while (ss >> cuv)
        if (cuv.length() > maxCuv.length())
            maxCuv = cuv;
    return maxCuv;


}


int main()
{

    // Sortare lexicografic a cuvintelor -----------------------------------
    vector<string> cuvinte = {"mere","ana","bac","info"};
    // Alfabetic crescator
    sort(cuvinte.begin(), cuvinte.end());
    // Dupa lungime, apoi alfabetic
    sort(cuvinte.begin(), cuvinte.end(),
    [](string a, string b) {
    if (a.length() != b.length())
        return a.length() < b.length();
        return a < b;
        });

    // Citire linie întreag cu getline -----------------------------------
    string linie;
    // Citire simpla
    getline(cin, linie);
    // ATENTIE: dupa cin >> n, ramane '\n' in buffer!
    // Trebuie consumat inainte de getline:
    int n;
    cin >> n;
    cin.ignore(); // consuma newline-ul ramas
    getline(cin, linie); // acum citeste corect

    //Eliminare spatii multiple -------------------------------------
    string text = "   Ana   are   mere  ";
    cout << "Inainte: '" << text << "'\n";
    cout << "Dupa compacteaza: '" << compacteaza(text) << "'\n";

    // Inlocuire substring -------------------------------------
    string s = "ana are ana";
    cout << "Inainte: '" << s << "'\n";
    cout << "Dupa replaceAll: '" << replaceAll(s, "ana", "ion") << "'\n";

    // Cel mai lung cuvânt -------------------------------------
    string text2 = "Ana are mere rosii si galbene";
    cout << "Cel mai lung cuvant: '" << celMaiLung(text2) << "'\n";

    return 0;
}

