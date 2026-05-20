#include <iostream>
#include <fstream>
#include <filesystem>
#include <unordered_map>

using namespace std;

ifstream fin("numere.in");

// Ex3

int na, nb;

int numarMinim(int n)
{
    int u = n % 10;
    int z = n % 100 / 10;
    if (u < z)
    {
        int aux = u;
        u = z;
        z = aux;
    }

    return z * 10 + u;
}

int main()
{
    fin >> na >> nb;

    int a[100001], b[100001];
    for (int i = 0; i < na; i++)
        fin >> a[i];
    for (int i = 0; i < nb; i++)
        fin >> b[i];

    unordered_map<int, int> mp;
    for (int i = 0; i < nb; i++)
        mp[numarMinim(b[i])]++;

    int total = 0;

    for (int i = 0; i < na; i++)
    {
        int x = numarMinim(a[i]);
        total += mp[x];
    }

    cout << total << endl;

    fin.close();

    /*
    *Se citesc din fișier numerele na și nb, șirul A de na numere și șirul B de nb numere.
Pentru a determina dacă două numere formează o pereche asemenea, se extrag ultimele două cifre ale fiecărui număr.
Deoarece cifrele pot fi dispuse în orice ordine, se sortează cele două cifre și se formează o cheie unică.
De exemplu, numerele 112 și 321 au ambele cheia 12, deoarece conțin cifrele {1, 2} în ultimele două poziții.
Se parcurge șirul B și se construiește un tablou de frecvențe frecB, unde frecB[cheie] reține numărul de elemente din B care au cheia respectivă.
Se parcurge apoi șirul A, și pentru fiecare element se calculează cheia sa. Se adaugă la contorul total valoarea frecB[cheie],
reprezentând numărul de elemente din B care formează o pereche asemenea cu elementul curent din A.
Se afișează valoarea total.
Justificarea eficienței:
O soluție neeficientă ar compara fiecare element din A cu fiecare element din B, rezultând o complexitate O(na × nb),
care pentru valorile maxime ale problemei ar însemna până la 10¹⁰ operații — inacceptabil ca timp de execuție.
Algoritmul proiectat parcurge șirul B o singură dată pentru construirea tabloului de frecvențe,
apoi parcurge șirul A o singură dată pentru numărarea perechilor. Astfel, complexitatea temporală este O(na + nb),
adică liniară, ceea ce asigură un timp de execuție foarte bun chiar și pentru valori maxime ale datelor de intrare.
     */

    return 0;
}