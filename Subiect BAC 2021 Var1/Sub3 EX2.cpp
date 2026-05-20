#include <iostream>
#include <cstring>

using namespace std;

bool vocala(char s)
{
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
        return true;
    return false;
}

int main()
{

    int n, k, l;
    char s[21][21];
    cin >> n >> k;
    l = k;

    for (int i = 0; i < n; i++)
        cin >> s[i];

    int a[21];

    for (int i = 0; i < n; i++)
    {
        int poz = strlen(s[i]) - 1;
        char str = s[i][poz];
        if (vocala(str) && l != 0)
        {
            a[l--] = i;
        }
    }

    if (l > 1)
    {
        cout << "Nu exista";
        return 0;
    }

    for (int i = k; i >= 1; i--)
        cout << s[a[i]] << " ";

    return 0;
}