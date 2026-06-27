#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int uc = 0;
    int lc = 0;
    int size = str.size();

    for(int i = 0; i < size; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            uc++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            lc++;
        }
    }

    if(uc > lc) {
        transform(str.begin(), str.end(), str.begin(),:: toupper);
    } 
    else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    
    cout << str << endl;
    
    return 0;
}