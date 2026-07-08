#include <bits/stdc++.h>
using namespace std;

int main() {
    string pass;
    cin>>pass;
    
    int n;
    cin>>n;
    
    vector<string> words(n);
    bool Dmatch = false;
    bool Fhalf = false;
    bool Shalf = false;
    
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
        
        if (words[i] == pass) {
            Dmatch = true;
        }
        if (words[i][1] == pass[0]) {
            Fhalf = true;
        }
        if (words[i][0] == pass[1]) {
            Shalf = true;
        }
    }
    
    if (Dmatch || (Fhalf && Shalf)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}