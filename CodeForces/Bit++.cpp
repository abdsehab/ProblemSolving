#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int x = 0;
    cin >> n;
    
    string s;
    while (n>0) {
        cin >> s;
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
        n--;
    }
    cout << x << "\n";
    return 0;
}