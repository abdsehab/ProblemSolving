#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vector<int>arr;
        int multi = 1;

        while(x>0){
            int digit= x%10;
            if(digit!=0){
                arr.push_back(digit*multi);
            }
            x/=10;
            multi*=10;
        }

        cout << arr.size() << "\n";
        for (int k=0; k<arr.size(); k++) {
        cout << arr[k] << " ";
    }
    cout << "\n";

    }
}