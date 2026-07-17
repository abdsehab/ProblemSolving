#include<bits/stdc++.h>
using namespace std;

int main() { 
    int x;
    cin >> x;
    while (x--) {
        int n, k;
        cin>>n>>k;
    
        bool found = false;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == k) {
            found = true;
        }
    }
    
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }
    
    return 0;
}