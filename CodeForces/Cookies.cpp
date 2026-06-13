#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int sum=0;
        
    for(int i=0; i<n; i++){
        int c;
        cin>>c;
        if(c%2==0){
            count++;
        }
        sum=sum+c;
    }
    if(sum%2!=0){
        cout<<n-count;
    }
    else{
        cout<<count;
    }  
    return 0;  
}

/*
Approach: Calculate the total sum. If the sum is odd, return the count of odd numbers in the input. If the sum is even, return the count of even numbers.

*/