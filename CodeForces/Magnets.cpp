#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string prev="";
    int count=0;
    for(int i=0; i<n; i++){
        string x; 
        cin>>x;

        if(x!=prev){
            count ++;
            prev= x;
        }
    }
    cout<<count;
    return 0;
}