#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count=0;
    cin>>n;  
    for (int i=0; i<n; i++){
        int sum=0;
        for (int j=0; j<3; j++){
            int x;
            cin>>x;
            sum= sum+x;
        }
        if (sum>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}