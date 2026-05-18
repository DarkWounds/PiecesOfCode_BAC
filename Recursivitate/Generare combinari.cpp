#include <iostream>
#include <vector>

using namespace std;

int v[100];

// Genereaza toate combinariile de nrElem elemente din multimea {1, 2, ..., n}
// folosind backtracking. Complexitate O(n!/(k!*(n-k)!)).
void combinari(int k, int nrElem, int n) {
    if (k == nrElem+1) {
        for (int i=1; i<=nrElem; i++) cout<<v[i]<<" ";
        cout << "\n"; return;
    }
    int start = (k==1) ? 1 : v[k-1]+1;
    for (int i = start; i <= n; i++) {
        v[k] = i;
        combinari(k+1, nrElem, n);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    combinari(1, k, n);
    return 0;
}