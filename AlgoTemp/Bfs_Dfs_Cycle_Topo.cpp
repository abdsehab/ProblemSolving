#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int> *l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int u, int v, bool isDirected = false) {
        l[u].push_back(v);
        if (!isDirected) {
            l[v].push_back(u);
        }
    }

    void printAdjList() {
        for (int i = 0; i < V; i++) {
            cout << i << " : ";
            for (int nei : l[i]) {
                cout << nei << " ";
            }
            cout << endl;
        }
    }

    // BFS
    void bfs() {
        queue<int> q;
        vector<bool> vis(V, false);
        
        q.push(0);
        vis[0] = true;
        
        while (q.size() > 0) {
            int u = q.front();
            q.pop();
            
            cout << u << " ";
            
            for (int v : l[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    // DFS Helper
    void dfsHelper(int u, vector<bool>& vis) {
        cout << u << " ";
        vis[u] = true;
        
        for (int v : l[u]) {
            if (!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    // DFS
    void dfs() {
        vector<bool> vis(V, false);
        
        // Handles disconnected components
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsHelper(i, vis);
            }
        }
        cout << endl;
    }

    // Cycle Detection in Directed Graph
    bool isCycleDirDFS(int curr, vector<bool>& vis, vector<bool>& recPath) {
        vis[curr] = true;
        recPath[curr] = true;
        
        for (int v : l[curr]) {
            if (!vis[v]) {
                if (isCycleDirDFS(v, vis, recPath)) {
                    return true;
                }
            } else if (recPath[v]) {
                return true;
            }
        }
        
        recPath[curr] = false;
        return false;
    }

    // Cycle Detection
    bool isCycle() {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (isCycleDirDFS(i, vis, recPath)) {
                    return true;
                }
            }
        }
        return false;
    }

    // TopoSort Helper
    void topoSortDFS(int curr, vector<bool>& vis, stack<int>& s) {
        vis[curr] = true;
        
        for (int v : l[curr]) {
            if (!vis[v]) {
                topoSortDFS(v, vis, s);
            }
        }
        s.push(curr);
    }

    // TopoSort Main
    void topoSort() {
        vector<bool> vis(V, false);
        stack<int> s;
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                topoSortDFS(i, vis, s);
            }
        }
        
        while (s.size() > 0) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    cout << "Adjacency List:" << endl;
    g.printAdjList();

    cout << "\nBFS Traversal:" << endl;
    g.bfs();

    cout << "\nDFS Traversal:" << endl;
    g.dfs();
    
    // directed acyclic graph 
    Graph dag(6);
    dag.addEdge(5, 2, true);
    dag.addEdge(5, 0, true);
    dag.addEdge(4, 0, true);
    dag.addEdge(4, 1, true);
    dag.addEdge(2, 3, true);
    dag.addEdge(3, 1, true);

    cout << "\nTopological Sort (DAG):" << endl;
    dag.topoSort();

    cout << "\nDoes DAG have a cycle? " << (dag.isCycle() ? "Yes" : "No") << endl;

    return 0;
}