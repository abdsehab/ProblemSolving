#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    set<int>brr;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        brr.insert(x);
    }
    
    vector<int>arr(brr.begin(), brr.end());
    int size=arr.size();

    bool check=false;
    if (arr.size() >= 3){
        for(int i=0; i<arr.size()-2; i++){
        if(arr[i+2] - arr[i] == 2){
            check =true;
            break;
        }
    }
    }
    
    if(check){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}