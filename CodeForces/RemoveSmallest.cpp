#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    for(int i=0; i<x; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        sort(arr, arr+n);

        bool check= true;
        for(int k=0; k<n-1; k++)
        {
            if(arr[k+1]-arr[k]>1){
                check=false;
                break;
            }
            
        }
        if(check){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        

    }
}