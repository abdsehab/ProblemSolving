#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "codeforces";

    for(int i=0; i<n; i++){
    char c;
    cin >> c; 
    if (s.find(c) != string::npos) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }
    return 0;
}