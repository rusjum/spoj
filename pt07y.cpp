#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

bool bfs_check(vector<vector<int>> graph, int n) {
    vector<char> visited(n, 0);
    deque<int> q = {};
    visited[0] = 1;
    q.push_back(0);
    while (!q.empty()) {
        int cur = q.front();
        q.pop_front();
        for (const int & neigh : graph[cur]) {
            if (visited[neigh] == 0) {
                visited[neigh] = 1;
                q.push_back(neigh);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (visited[i] != 1) 
            return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph = {};
    for (int i = 0; i < n; ++i) {
        graph.push_back(vector<int>());
    }
    int v, u;
    for (int i = 0; i < m; ++i) {
        cin >> v >> u;
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }
    bool res = true;
    if (n == 0 && m == 0) {
        cout << "YES\n";
        return 0;
    }
    if (m != n - 1) res = false;
    if (res) {
        res = bfs_check(move(graph), n);
    }
    
    if (res) 
        cout << "YES\n";
    else 
        cout << "NO\n";
    return 0;
}

