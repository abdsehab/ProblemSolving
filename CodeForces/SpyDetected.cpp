#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int x;
        cin>>x;

        int arr[x];

        for(int i=0; i<x; i++){
            cin>> arr[i];
        }

        int common;
        if (arr[0] == arr[1]) {
            common = arr[0];
        } else if (arr[0] == arr[2]) {
            common = arr[0];
        } else {
            common = arr[1];
        }

        for (int i = 0; i < x; i++) {
            if (arr[i] != common) {
                cout << i + 1 << "\n";
                break;
            }
        }
        n--;
    }
}