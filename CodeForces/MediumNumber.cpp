#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int brr[n];
    for(int i=0; i<n; i++){
        int arr[3];
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];

        sort(arr, arr+3);
        brr[i]=arr[1];
    }
    for(int i=0; i<n; i++){
        cout<<brr[i]<<endl;
    }
}