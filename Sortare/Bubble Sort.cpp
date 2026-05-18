#include <iostream>

using namespace std;


// Compara elementele adiacente si le interschimba daca sunt in ordine gresita. Eficient pe vectori mici sau aproape sortati.
void bubbleSort(int v[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (v[j] > v[j+1])
                swap(v[j], v[j+1]);
}

int main()
{
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    bubbleSort(a, n);
    return 0;
}