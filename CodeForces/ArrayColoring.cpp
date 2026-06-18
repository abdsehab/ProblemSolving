#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        int sum=0;
        for(int j=0; j<x; j++){
            int val;
            cin>> val;
            sum+=val;
        }
        if(sum%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}