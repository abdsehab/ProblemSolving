#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string num;
        cin>>num;
        
        if(num.length() >= 3 && num[0] == '1' && num[1] == '0' && num[2] != '0'){

            string rp = num.substr(2);
            int value = stoi(rp);

            if(value >= 2){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
    }
    else {
            cout << "NO\n";
        }

}
}