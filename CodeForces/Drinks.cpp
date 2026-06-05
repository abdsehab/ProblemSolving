#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum=sum+x;
    }

    float x= (sum*1.0)/n;
    cout<< x;
}