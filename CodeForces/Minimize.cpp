#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int a,b;
        cin>>a>>b;
        int c= (a+b)/2;

        cout<<(c-a)+(b-c)<<endl;
        n--;
    }
}