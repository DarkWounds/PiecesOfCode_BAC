#include <queue>
#include <iostream>
#include <vector>

// Parcurgerea in latime (BFS) a unui graf reprezentat prin liste de adiacenta. Complexitate O(n+m).
std::vector<int> adj[100];
bool viz[100];
void dfs(int nod) {
    viz[nod] = true;
    std::cout << nod << " ";
    for (int v : adj[nod])
        if (!viz[v]) dfs(v);
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // pentru graf neorientat
    }
    dfs(n);

    // Componente conexe:
    int comp = 0;
    for (int i=1; i<=n; i++)
        if (!viz[i]) { dfs(i); comp++; }

    return 0;
}