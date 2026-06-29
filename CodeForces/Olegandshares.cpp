#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    long long int k;
    cin>>n>>k;

    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    long long int sec=0;

    for(int i=1; i<n;i++){
        long long int def= arr[i]-arr[0];
        if(def%k==0){
            sec=sec+def/k;
        }
        else{
            sec=-1;
            break;
        }
    }

    cout<<sec;
}