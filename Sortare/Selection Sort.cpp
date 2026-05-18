#include <iostream>

using namespace std;

// Gaseste minimul si il pune pe pozitia corecta la fiecare pas.
void insertionSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int key = v[i], j = i-1;
        while (j >= 0 && v[j] > key) {
            v[j+1] = v[j]; j--;
        }
        v[j+1] = key;
    }
}


int main()
{
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    insertionSort(a, n);
    return 0;
}