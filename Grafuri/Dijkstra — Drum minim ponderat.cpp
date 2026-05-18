#include <climits>
#include <queue>
#include <algorithm>
#include <vector>

std::vector<std::pair<int,int>> adj[100]; // {vecin,cost}

// Algoritmul lui Dijkstra pentru a gasi distanta minima de la nodul start la toate celelalte noduri.
// Complexitate O((V+E) log V).
std::vector<int> dijkstra(int start, int n) {
    std::vector<int> dist(n+1, INT_MAX);
    std::priority_queue<std::pair<int,int>,
                        std::pmr::vector<std::pair<int,int>>, std::greater<>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while (!pq.empty()) {
        auto [d,nod] = pq.top(); pq.pop();
        if (d > dist[nod]) continue;
        for (auto [v,c] : adj[nod])
            if (dist[nod]+c < dist[v]) {
                dist[v]=dist[nod]+c;
                pq.push({dist[v],v});
            }
    }
    return dist;
}