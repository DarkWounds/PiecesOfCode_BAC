#include <iostream>

using namespace std;

int cmmdc(int a, int b) {
    while (b) {
        int r = a % b;
        a = b; b = r;
    }
    return a;
}

int cmmmc(int a, int b) {
    return a / cmmdc(a, b) * b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << cmmmc(a, b) << endl;
    return 0;
}