#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

long long cifreNumar(int n)
{
    long long p = 1;
    do
    {
        p *= 10;
        n /= 10;
    } while (n);
    return p;
}

int main()
{
    int x, first = -1, second = -1;
    long long p;

    fin >> x;
    p = cifreNumar(x);
    int a;
    int l = 0;
    while (fin >> a)
    {
        if (a >= x)
        {
            int number = a % p;
            int numLast = l % p;
            if (number == x && numLast == x)
            {
                first = l;
                second = a;
            }
        }
        l = a;
    }

    if (first == -1)
    {
        cout << "nu exista";
        return 0;
    }

    cout << first << " " << second << " ";
    fin.close();

    return 0;
}