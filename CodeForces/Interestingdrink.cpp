#include<bits/stdc++.h>
using namespace std;

int main(){
    int shop;
    cin>>shop;
    int arr[shop];
    for(int i=0; i<shop; i++){
        cin>>arr[i];
    }
    sort(arr, arr + shop);

    int day;
    cin>>day;

    for(int i=0; i<day; i++){
        int target;
        cin>>target;
        int left=0;
        int right=shop-1;
        int count = 0;

        while (left <= right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] <= target){
            count = mid + 1;  
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    cout << count << endl;
    }

    return 0;
}