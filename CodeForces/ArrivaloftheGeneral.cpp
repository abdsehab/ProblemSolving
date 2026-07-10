#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int max_val = 0;
    int min_val = 101; 
    int max_idx = 0;
    int min_idx = 0;

    for (int i = 0; i < n; ++i) {
        int height;
        cin >> height;
        
        if (height > max_val) {
            max_val = height;
            max_idx = i;
        }

        if (height <= min_val) {
            min_val = height;
            min_idx = i;
        }
    }
    int total_swaps = max_idx + (n - 1 - min_idx);

    if (max_idx > min_idx) {
        total_swaps--;
    }

    cout << total_swaps << "\n";

    return 0;
}