#include <iostream>

using namespace std;

// Algoritmul lui Kadane pentru a gasi suma maxima a unui subsir contig. Complexitate O(n).
int kadane(int v[], int n) {
    int suma = v[0], maxim = v[0];
    for (int i = 1; i < n; i++) {
        suma = max(v[i], suma + v[i]);
        maxim = max(maxim, suma);
    }
    return maxim;
}


int main()
{
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << kadane(a, n);
    return 0;
}