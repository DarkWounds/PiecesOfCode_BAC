#include <iostream>

using namespace std;

int sumaCifre(int n) {
    int s = 0;
    while (n > 0) { s += n % 10; n /= 10; }
    return s;
}
int nrCifre(int n) {
    int c = 0;
    while (n > 0) { c++; n /= 10; }
    return c;
}

int oglindire(int n) {
    int o = 0;
    while (n > 0) { o = o * 10 + n % 10; n /= 10; }
    return o;
}

int main()
{
    int n;
    cin >> n;
    cout << "Suma cifrelor: " << sumaCifre(n) << endl;
    cout << "Numar de cifre: " << nrCifre(n) << endl;
    cout << "Oglindirea numarului: " << oglindire(n) << endl;
    return 0;
}