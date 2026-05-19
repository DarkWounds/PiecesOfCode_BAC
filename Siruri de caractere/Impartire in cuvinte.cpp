#include <sstream>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    // Împartire cu stringstream --------------------------------
    string text = "ana are mere multe";
    stringstream ss(text);
    string cuvant;
    vector<string> cuvinte;
    while (ss >> cuvant)
        cuvinte.push_back(cuvant);
    // cuvinte = {"ana","are","mere","multe"}
    cout << "Total: " << cuvinte.size();

    // Împartire cu getline + delimitator -------------------------------
    string linie = "ana,ion,maria";
    stringstream ss(linie);
    string token;
    while (getline(ss, token, ',')) {
        cout << token << "\n";
    }
    // Output: ana / ion / maria

    // Împartire manuala cu find + substr --------------------------------
    string s = "bac-info-2025";
    char delim = '-';
    vector<string> parts;
    int start = 0;
    int poz = s.find(delim);
    while (poz != string::npos) {
        parts.push_back(s.substr(start, poz-start));
        start = poz + 1;
        poz = s.find(delim, start);
    }
    parts.push_back(s.substr(start)); // ultimul token

    // Numar de cuvinte dintr-un text --------------------------------
    string text2 = "ana are mere multe";
    int count = 0;
    for (size_t i = 0; i < text2.size(); i++)
        if (text2[i] != ' ' && (i == 0 || text2[i-1] == ' '))
            count++;
    cout << "Numar de cuvinte: " << count;

    //Inversarea cuvintelor dintr-un text --------------------------------
    string text3 = "ana are mere";
    stringstream ss3(text3);
    vector<string> words;
    while (ss3 >> cuvant)
        words.push_back(cuvant);
    reverse(words.begin(), words.end());
    for (const string& w : words)
        cout << w << " ";


    return 0;
}

