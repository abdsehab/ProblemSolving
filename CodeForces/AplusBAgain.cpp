#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int x;
        cin>>x;
        int digit=x%10;
        int sum= digit+(x/10);

        cout<<sum<<"\n";
        n--;
    }
}