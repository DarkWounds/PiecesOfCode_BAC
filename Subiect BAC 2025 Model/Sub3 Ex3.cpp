#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int MarimeAn(int n)
{
    int p = 1;
    do
    {
        n /= 10;
        p *= 10;

    } while (n);
    return p;
}

int main()
{
    int anFab, a[100001], n = 0;
    int primul = -1, ultimul = -1;
    fin >> anFab;
    int last = 0;
    while (fin >> a[n++]);
    int p = MarimeAn(anFab);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % p == anFab && last % p == anFab)
        {
            primul = ultimul;
            ultimul = a[i];
        }
        last = a[i];

    }

    if (primul == -1 )
        cout << "nu eixsta";
    else cout << primul / p << " " << ultimul / p;

    return 0;

}
