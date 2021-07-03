// MINIMIZE THE MAXIUM DIFFERENCE BETWEEN HEIGHTS 

#include<bits/stdc++.h>
using namespace std;

int minMaxDiff(int arr[],int n,int k){
         sort(arr,arr+n);  
        int mi, ma;
        int result = arr[n - 1] - arr[0];
 
        int smallest = arr[0] +k;
        int largest = arr[n-1]-k;

        for (int i = 0; i<n-1; i++) {
            
                ma = max(arr[i] + k, largest);
                mi = min(smallest, arr[i+1] - k);

                if(mi<0){
                    continue;
                }
                result = min(result,ma-mi);
        }
        return result;
    
}



int main(){
    int arr[] = {3,9,12,16,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=6;
    int ans = minMaxDiff(arr,n,k);
    cout<<"Minimise the maximum difference is: "<<ans<<endl;
    return 0;
}