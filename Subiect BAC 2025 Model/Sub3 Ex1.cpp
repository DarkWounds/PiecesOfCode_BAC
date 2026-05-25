#include <iostream>

using namespace std;

int StergeImpare(int x)
{
    int s = 0;
    while (x)
    {
        int r = x % 10;
        if (r % 2 == 0)
            s = s * 10 + r;
        x /= 10;
    }
    return s;
}

int Oglindire(int x)
{
    int s = 0;
    while (x)
    {
        int r = x % 10;
        s = s * 10 + r;
        x /= 10;
    }
    return s;
}

void pao(int x, int y, int &rez)
{
    rez = 0;
    int a = StergeImpare(x);
    int b = Oglindire(StergeImpare(y));
    if (a == b && a != 0)
        rez = 1;
}

int main()
{
    int x, y, rez;
    cin >> x >> y;
    pao(x, y, rez);
    cout << rez;
}
