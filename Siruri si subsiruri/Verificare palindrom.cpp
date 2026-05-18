#include <iostream>

using namespace std;

// Verifica daca un sir este palindrom (citit la fel de la stanga la dreapta si invers). Complexitate O(n).
bool palindrom(string s) {
    int st = 0, dr = s.size()-1;
    while (st < dr)
        if (s[st++] != s[dr--]) return false;
    return true;
}


int main()
{
    string a;
    cin >> a;
    cout << (palindrom(a) ? "DA" : "NU") << endl;
    return 0;
}