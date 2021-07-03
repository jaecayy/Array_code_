//Move all the negative elements to left side of array.
/*
method 1: common method : traverse the whole array , if element is negative then swap it otherwise,move ahead.

method 2:
Here,I'm using "TWO POINTER APPROACH" in which one pointer is at 0th index and other one is at last index ,on the basis of condition if swapping reuires, then we swap it,otherwise we will move ahead.
*/
#include<bits/stdc++.h>
using namespace std;

void shiftall(int a[],int left , int right){
    while(left <= right){
        if(a[left]<0 && a[right]<0){
            left++;
        }

        else if(a[left]>0 && a[right]<0){
            swap(a[left++],a[right--]);
        }
        else if(a[left]>0 && a[right]>0){
            right--;
        }

        else{
            left++;
            right--;
        }
    }
}

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    shiftall(arr,0,n);
    printArr(arr,n);
    return 0;
}