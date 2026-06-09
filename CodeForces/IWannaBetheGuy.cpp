#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    set<int> levels;
    int p, q, level;
    
    cin>>p;
    for(int i=0; i<p;i++){
        cin >> level;
        levels.insert(level);
    }
    cin>>q;
    for(int i=0; i<q;i++){
        cin >> level;
        levels.insert(level);
    }

    if (levels.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;

}
