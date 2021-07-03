#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right){
    int i,j,k;
    i=left;
    j=mid;
    k=left;
    int inv_count=0;
    while((i<=mid-1)&&(j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            inv_count += (mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++] = arr[i++];
    }
    while(j<=right){
        temp[k++] = arr[j++];
    }

    for(int l=left;l<=right;l++){
        arr[l] = temp[l];
    }
    return inv_count;
}

int mergeSort(int arr[],int temp[],int left,int right){
    int mid,inv_count=0;
    if(right>left){
        mid = (right+left)/2;
        inv_count += mergeSort(arr,temp,0,mid);
        inv_count += mergeSort(arr,temp,mid+1,right);

        inv_count += merge(arr,temp,left,mid+1,right);
    }

    return inv_count;
}

int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    int ans = mergeSort(arr,temp,0, n-1);
    cout<<"Number of inversions are: "<<ans<<endl;
    return 0;
}
    