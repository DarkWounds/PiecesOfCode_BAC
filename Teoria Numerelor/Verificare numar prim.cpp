#include <iostream>

using namespace std;

bool prim(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << (prim(n) ? "DA" : "NU") << endl;
    return 0;
}