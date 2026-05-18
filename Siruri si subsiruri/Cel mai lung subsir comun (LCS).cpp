#include <iostream>
#include <vector>

using namespace std;

// Lungimea celui mai lung subsir comun (LCS) dintre doua siruri. Complexitate O(n*m).
int lcs(string a, string b) {
    int n=a.size(), m=b.size();
    pmr::vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            if (a[i-1]==b[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    return dp[n][m];
}



int main()
{
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b);
    return 0;
}