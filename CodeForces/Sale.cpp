#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int price[n];

    for(int i=0; i<n; i++){
        cin>>price[i];
    }
    sort(price, price + n);

    int sum=0;
    for(int i=0; i<m; i++){
        if(price[i]<0){
            sum=sum+abs(price[i]);
        }
        else {
            break;
        }
    }
    cout<<sum;

    return 0;
}