#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x; 
    cin >> x;
    
    vector<long long> arr(x);
    for(int i = 0; i< x; i++){
        cin >> arr[i];
    }

    vector<long long> prefixMin(x);
    prefixMin[0] = arr[0];
    long long sum1 = arr[0];
    
    for(int i = 1; i < x; i++){
        prefixMin[i] = min(prefixMin[i-1], arr[i]);
        sum1 = sum1+ prefixMin[i];
    }

    long long minTotalSum = sum1;
    long long prefixSum = 0;
    long long minPenalty = 1e18; 
    bool isDecreasing = true;

    for(int i = 1; i < x; i++){
        prefixSum = prefixSum+ prefixMin[i-1];
        if(i>= 2 && arr[i-1] >= prefixMin[i-2]) {
            isDecreasing = false;
        }

        long long penalty = 0;
        if (isDecreasing) {
            penalty = min(arr[i], minPenalty);
        }
        minTotalSum = min(minTotalSum, prefixSum + penalty);
        minPenalty = min(minPenalty, arr[i-1] - arr[i]);
    }
    cout << minTotalSum << "\n";
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
    
    return 0;
}