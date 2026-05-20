#include <iostream>

using namespace std;

// Ex2

int main()
{
    int k, n;
    cin >> k >> n;
    int a[101][101] = {0};

    for (int i = 0; i < n; i++)
        a[i][i] = k * (i + 1);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i < j)
                a[i][j] = a[i][j - 1] + 1;
            if (i > j)
                a[i][j] = a[i - 1][j] + 2;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}