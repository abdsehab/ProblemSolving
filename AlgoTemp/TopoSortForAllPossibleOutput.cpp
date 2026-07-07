#include<bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int> *l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v); 
    }

    // backtracking
    void allTopoSortHelper(vector<int>& res, vector<bool>& vis, vector<int>& indegree) {
        bool flag = false;

        for (int i = 0; i < V; i++) {
            // If indegree is 0 and not yet visited, it's a valid next step
            if (indegree[i] == 0 && !vis[i]) {
                
                // 1. Choose: Include in path and reduce neighbors' indegree
                vis[i] = true;
                res.push_back(i);
                for (int neighbor : l[i]) {
                    indegree[neighbor]--;
                }

                // 2. Explore: Recurse with updated graph state
                allTopoSortHelper(res, vis, indegree);

                // 3. Un-choose (Backtrack): Restore state for next loop iteration
                vis[i] = false;
                res.pop_back();
                for (int neighbor : l[i]) {
                    indegree[neighbor]++;
                }
                
                flag = true; // Indicates we processed at least one valid node
            }
        }

        // If no node was chosen, it means we reached the end of a full permutation
        if (!flag && res.size() == V) {
            for (int i = 0; i < res.size(); i++) {
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }

    // Main function to trigger the backtracking
    void printAllTopoSorts() {
        vector<bool> vis(V, false);
        vector<int> indegree(V, 0);

        // Step 1: Calculate initial in-degrees for all vertices
        for (int i = 0; i < V; i++) {
            for (int neighbor : l[i]) {
                indegree[neighbor]++;
            }
        }

        vector<int> res; // To store the current permutation
        allTopoSortHelper(res, vis, indegree);
    }
};

int main() {
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "All possible Topological Sorts:" << endl;
    g.printAllTopoSorts();

    return 0;
}