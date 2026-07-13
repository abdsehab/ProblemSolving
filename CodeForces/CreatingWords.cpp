#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    for(int i=0;i<x; i++){
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << "\n";
        }
    
    return 0;
}