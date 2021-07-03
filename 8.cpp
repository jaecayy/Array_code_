//Find the largest sum contiguous subarray 

/*
I solved this problem using "KADANE'S ALGORITHM" in which I take two variables maxsofar & maxendinghere
& traverse the whole array ,on traversing i add the current element to maxendinghere and then check it with maxsofar ,if it is greater than maxsofar then I update the maxsofar with maxendinghere otherwise I'll move ahead;
*/

// K A D A N E ' S   A L G O R I T H M

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[],int n){
    int maxsofar=INT_MIN;
    int maxendinghere = 0;
    for(int i=0;i<n;i++){
        maxendinghere += arr[i];
        if(maxendinghere > maxsofar){
            maxsofar = maxendinghere;
        }
        if(maxendinghere <0){
            maxendinghere = 0;
        }
    }
    return maxsofar;
}

int main(){
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int maxans = maxSubArraySum(a,n);
    cout<<"Maximum Contiguous SubArray sum is: "<<maxans<<endl;
    return 0;
}