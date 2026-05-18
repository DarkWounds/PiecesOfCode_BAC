#include <queue>
#include <iostream>
#include <vector>

// Parcurgerea in latime (BFS) a unui graf reprezentat prin liste de adiacenta. Complexitate O(n+m).
std::vector<int> adj[100];

void bfs(int start, int n) {
    std::vector<bool> viz(n+1, false);
    std::queue<int> q;
    viz[start] = true;
    q.push(start);
    while (!q.empty()) {
        int nod = q.front(); q.pop();
        std::cout << nod << " ";
        for (int v : adj[nod])
            if (!viz[v]) { viz[v]=true; q.push(v); }
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // pentru graf neorientat
    }
    bfs(1, n); // pornim BFS de la nodul 1
    return 0;
}