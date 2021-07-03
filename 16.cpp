#include<bits/stdc++.h>
using namespace std;

int max(int arr[],int n){
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(int i=0;i<n;i++){
        minPrice = min(arr[i],minPrice);
        maxProfit = max(maxProfit,arr[i]-minPrice);
    }
    return maxProfit;
}

int main(){
    int arr[]={ 100, 180, 260, 310,
                    40, 535, 695 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = max(arr,n);
    cout<<"Maximum profit is: "<<ans<<endl;
    return 0;
}