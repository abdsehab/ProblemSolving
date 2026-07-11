#include<bits/stdc++.h>
using namespace std;

void solve() {
   
}

int main() {

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
    
        string target = "codeforces";
        int count = 0;
    
        for (int i = 0; i < 10; ++i) {
        if (s[i] != target[i]) {
            count++;
        }
    }
    cout<<count<<endl;
    }
    
    return 0;
}