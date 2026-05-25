#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int Putere(int n, int p)
{
    int putere = 0;
    long long pk = p;
    while (pk <= n)
    {
        putere += n / pk;
        pk *= p;
    }
    return putere;
}

int main()
{
    int n;
    cin >> n;
    int p5 = Putere(n, 5);
    int p3 = Putere(n, 3);

    int p = min(p5, p3 / 2);

    cout << p << endl;


}
