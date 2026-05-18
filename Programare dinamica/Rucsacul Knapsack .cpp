#include <iostream>
#include <vector>

using namespace std;

// Problema rucsacului (Knapsack) folosind programare dinamica. Complexitate O(n*W).
int knapsack(int n, int W, int g[], int val[]) {
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for (int i=1; i<=n; i++)
        for (int j=0; j<=W; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= g[i])
                dp[i][j] = max(dp[i][j],
                dp[i-1][j-g[i]] + val[i]);
        }
    return dp[n][W];
}

int main()
{
    int n, W;
    int g[100], val[100];
    cin >> n >> W;
    for(int i = 1; i <= n; i++)
        cin >> g[i] >> val[i];
    cout << knapsack(n, W, g, val) << endl;
    return 0;
}