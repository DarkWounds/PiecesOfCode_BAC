#include <iostream>

using namespace std;

void factori(int n) {
    for (int d = 2; d*d <= n; d++) {
        if (n % d == 0) {
            int p = 0;
            while (n % d == 0) { p++; n /= d; }
            cout << d << "^" << p << " ";
        }
    }
    if (n > 1) cout << n << "^1";
}

int main()
{
    int n;
    cin >> n;
    factori(n);
    return 0;
}