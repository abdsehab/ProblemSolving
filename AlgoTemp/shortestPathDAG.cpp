#include <bits/stdc++.h>
using namespace std;

class WeightedGraph {
    int V;
    list<pair<int, int>> *l;

public:
    WeightedGraph(int V) {
        this->V = V;
        l = new list<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int weight) {
        l[u].push_back(make_pair(v, weight));
    }

    // TopoSort
    void topoSortDFS(int curr, vector<bool>& vis, stack<int>& s) {
        vis[curr] = true;
        for (auto edge : l[curr]) {
            int v = edge.first;
            if (!vis[v]) {
                topoSortDFS(v, vis, s);
            }
        }
        s.push(curr);
    }

    //shortest paths from a source
    void shortestPath(int src) {
        stack<int> s;
        vector<bool> vis(V, false);

        // toposort of the graph
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                topoSortDFS(i, vis, s);
            }
        }

        //distances infinity
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;

        // topo order
        while (!s.empty()) {
            int u = s.top();
            s.pop();

            if (dist[u] != INT_MAX) {
                for (auto edge : l[u]) {
                    int v = edge.first;
                    int weight = edge.second;

                    // the new path update 
                    if (dist[u] + weight < dist[v]) {
                        dist[v] = dist[u] + weight;
                    }
                }
            }
        }

        // Print 
        cout << "Shortest paths from source vertex " << src << ":" << endl;
        for (int i = 0; i < V; i++) {
            if (dist[i] == INT_MAX)
                cout << "Node " << i << " : Unreachable" << endl;
            else
                cout << "Node " << i << " : " << dist[i] << endl;
        }
    }
};

int main() {
    WeightedGraph wg(6);
    // wg.addEdge(u, v, weight);
    wg.addEdge(0, 1, 1);
    wg.addEdge(0, 4, 1);
    wg.addEdge(1, 2, 1);
    wg.addEdge(4, 2, 1);
    wg.addEdge(4, 5, 1);
    wg.addEdge(2, 3, 1);
    wg.addEdge(5, 3, 1);

    int source = 0;
    wg.shortestPath(source);

    return 0;
}