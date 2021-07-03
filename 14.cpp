// NEXT PERMUTATION PROBLEM . 

/*
In this problem , I traverse the array from back of array and find out the point where arr[i]<arr[i+1]
this is our first break point, we traverse the array from the back of the array and search the element wich is next greater than the first break point element, if the element is found then swap it with break point element and reverse the array which is next to the break point element,this is done because in lexicographically order there is a point,

1 3 5 4 2 =>
                                  5  
                                3   4
                              1       2

                              in the above diagram, upto 5 array is in increasing order from back when arr[i] = 3 colloides then, break point is arr[i]=3 ;
                              and traverse from back and check arr[i]<arr[j] if next larger element is found then swap it 
                              array becomes ->  1 4 5 3 2
                              and reverse the array after the break point
                              array becomes,
                              1 4 2 3 5


 I solved it in a O(n) time complexity and in a constant space complexity
*/

#include<bits/stdc++.h>
using namespace std;
void nextPermutation(int arr[],int n){
   int i,j;
    for(i=n-2;i>=0;i--){        // i started from n-2 'coz i checkedd it with rightward element so,
                                // I     strated it with n-2 ,if i startedd it with n-1 then there is
                                //no right element that'why n-2
        if(arr[i]<arr[i+1]){
            break;
        }
    }
    if(i==0){
        reverse(arr,arr+n);
    }
    else{
        for( j=n-1;j>i;j--){

            if(arr[j]>arr[i]){
                break;
            }

        }
        swap(arr[i],arr[j]);
        reverse(arr+i+1,arr+n);
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,3,5,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    nextPermutation(arr,n);
    printArr(arr,n);
    return 0;
}