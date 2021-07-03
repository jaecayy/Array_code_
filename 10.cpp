//MINIMUM STEPS TO REACH THE END

//In O(n) time complexity and in constant space complexity.

#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[],int n){
    int maxR = arr[0];
    int steps = arr[0];
    int jump = 1;
    if(n==1){
         return 0;
    }

    else if(arr[0]==0) {
        return -1;
    }

    else{
        for(int i=1;i<n;i++){
            if(i == n-1){
                return jump;
            }
            maxR = max(maxR,i+arr[i]);
            steps--;
            if(steps == 0)
            {
                jump++;
                if(i>maxR)
                {
                    return -1;
                }
                steps = maxR - i;

            }
        }

    }

}

int main(){
    int arr[]={1,3,5,8,9,2,6,7,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = minJumps(arr,n);
    cout<<"Minimum jumps to reach the end : "<<ans<<endl;
    return 0;
}