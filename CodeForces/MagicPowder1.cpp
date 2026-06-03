/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int ing,mp;
    cin>>ing>>mp;

    int req[ing];
    int have[ing];
    int make[ing];

    for(int i=0; i<ing; i++){
        cin>>req[i];
    }
    for(int i=0; i<ing; i++){
        int j;
        cin>>j;
        have[i]= j+mp;
    }

    for(int i=0; i<ing; i++){
        make[i]=have[i]/req[i];
    }
    sort(make,make+ing);

    cout<<make[0];

} */