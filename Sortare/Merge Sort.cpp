#include <iostream>
#include <vector>

using namespace std;

// Interclaseaza doua subvectori sortati intr-unul singur sortat.
void merge(int v[], int st, int mij, int dr) {
    vector<int> tmp;
    int i = st, j = mij+1;
    while (i<=mij && j<=dr)
        tmp.push_back(v[i]<=v[j] ? v[i++] : v[j++]);
    while (i<=mij) tmp.push_back(v[i++]);
    while (j<=dr) tmp.push_back(v[j++]);
    for (int k=st; k<=dr; k++) v[k]=tmp[k-st];
}

// Imparte vectorul in doua jumatati, le sorteaza recursiv si apoi le interclaseaza.
void mergeSort(int v[], int st, int dr) {
    if (st >= dr) return;
    int mij = (st+dr)/2;
    mergeSort(v, st, mij);
    mergeSort(v, mij+1, dr);
    merge(v, st, mij, dr);
}


int main()
{
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n-1);

    for ( int i = 0; i <n; i++)
        cout << a[i] << " ";
    return 0;
}