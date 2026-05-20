#include <iostream>

using namespace std;

pair<int, int> numberitDivdes(int n, int t)
{
    pair<int, int> p;
    p.second = 0;
    p.first = 1;
    while (n % t == 0)
    {
        n /= t;
        p.first *= t;
        p.second ++;
    }
    return p;
}

int divPrim(int n)
{
    int s = 0;
    for (int i = 2; i <= n; i++)
    {
        pair <int, int> p = numberitDivdes(n, i);
        n /= p.first;
        if (p.second % 2 != 0)
            s += i;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << divPrim(n);
    return 0;
}
