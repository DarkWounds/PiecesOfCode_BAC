#include <iostream>

using namespace std;

// Cautare binara intr-un vector sortat. Complexitate O(log n).
int cautareBinara(int v[], int n, int x) {
    int st = 0, dr = n-1;
    while (st <= dr) {
        int mij = (st+dr)/2;
        if (v[mij] == x) return mij;
        else if (v[mij] < x) st = mij+1;
        else dr = mij-1;
    }
    return -1;
}

int main()
{
    int n, a[100], x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        a[i] = i * 2; // vector sortat: 0, 2, 4, 6, ...
    cout << cautareBinara(a, n, x);
    return 0;
}