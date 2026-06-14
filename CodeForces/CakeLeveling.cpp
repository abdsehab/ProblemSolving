#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int m; 
        cin>>m;
        int arr[m];
        for(int j=0; j<m; j++){
            cin>>arr[j];
        }
        long long int sum = arr[0];
        cout<< arr[0]<<" ";
        long long int curr=arr[0];
        for(int k=1; k<m; k++){
            sum=sum+arr[k];
           curr = min(curr, sum / (k + 1));
            cout << curr << " ";

        }

    }
}