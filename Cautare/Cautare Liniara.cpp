#include <iostream>

using namespace std;

int cautareLinara(int v[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (v[i] == x) return i;
    return -1; // negasit
}


int main()
{
    int n, a[100], x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << cautareLinara(a, n, x);
    return 0;
}