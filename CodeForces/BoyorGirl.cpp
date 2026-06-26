#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>> str;

    set<char>unique(str.begin(), str.end());
    if(unique.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}