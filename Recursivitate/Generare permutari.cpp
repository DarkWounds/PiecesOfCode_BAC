#include <iostream>

using namespace std;

int v[100]; bool folosit[100];

// Genereaza toate permutarile numerelor de la 1 la n folosind backtracking. Complexitate O(n!).
void permutari(int k, int n) {
    if (k == n+1) {
        for (int i=1; i<=n; i++) cout << v[i] << " ";
        cout << "\n"; return;
    }
    for (int i = 1; i <= n; i++) {
        if (!folosit[i]) {
            v[k] = i; folosit[i] = true;
            permutari(k+1, n);
            folosit[i] = false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    permutari(1, n);
    return 0;
}