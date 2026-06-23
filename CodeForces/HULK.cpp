#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str="I hate";
    if(n==1){
        cout<<str+" it";
    }
    else{
        for(int i=2;i<=n; i++){
            if(i%2==0){
                str+=" that I love";
            }
            else{
                str+=" that I hate";
            }
        }
        cout<<str+" it";
    }
    
}