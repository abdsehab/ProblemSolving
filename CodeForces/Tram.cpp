#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;
    int x = 0;
    int maxx = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
            x=x-a;
            x=x+b;
            maxx= max(maxx, x);
        }
        cout <<maxx;
    
    return 0;
}