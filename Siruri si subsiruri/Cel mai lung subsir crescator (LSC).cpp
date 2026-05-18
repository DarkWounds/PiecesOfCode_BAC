#include <iostream>

using namespace std;

// Lungimea celui mai lung subsir crescator (LSC). Complexitate O(n^2).
int lsc(int v[], int n) {
    int dp[1001], maxim = 1;
    fill(dp, dp+n, 1);
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (v[j] < v[i])
                dp[i] = max(dp[i], dp[j]+1);
    for (int i = 0; i < n; i++)
        maxim = max(maxim, dp[i]);
    return maxim;
}


int main()
{
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << lsc(a, n);
    return 0;
}