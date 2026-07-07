#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin>>arr[i];
    }

    sort(arr,arr+4);

    int sum = arr[3];

    int a = sum- arr[0];
    int b = sum - arr[1];
    int c = sum - arr[2];

    cout<<a<< " "<<b<< " "<<c<< endl;

    return 0;
}