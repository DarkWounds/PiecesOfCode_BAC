#include <iostream>
#include <vector>

using namespace std;

// Problema Suma de bani (Coin Change): gaseste numarul minim de monede necesare pentru a obtine suma S
// folosind monedele disponibile. Complexitate O(n*S).
int coinChange(int monede[], int n, int S) {
    vector<int> dp(S+1, INT_MAX);
    dp[0] = 0;
    for (int i=1; i<=S; i++)
        for (int j=0; j<n; j++)
            if (monede[j]<=i && dp[i-monede[j]]!=INT_MAX)
                dp[i]=min(dp[i], dp[i-monede[j]]+1);
    return dp[S]==INT_MAX ? -1 : dp[S];
}

int main()
{
    int n, S, monede[100];
    cin >> n >> S;
    for(int i = 0; i < n; i++)
        cin >> monede[i];
    cout << coinChange(monede, n, S) << endl;
    return 0;
}