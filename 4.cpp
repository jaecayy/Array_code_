//Given an array of 0 1 2 sort them in best complexity ;

// I used the Algorithm -> "DUTCH NATIONAL FLAG ALGORITHM" to sort the array in O(n) time complexity
//and in Linear space complexity.

//their is two methods -switch-case ladder or if-else-if ;

#include<bits/stdc++.h>
using namespace std;

// void sort(int arr[],int n){
//     int l=0;
//     int m=0;
//     int h=n-1;
//     while(m<=h){

//         switch(arr[m]){
//             case 0:
//                 swap(arr[m++],arr[l++]);
//                 break;
            
//             case 1:
//                 m++;
//                 break;
            
//             case 2:
//                 swap(arr[m],arr[h--]);
//                 break;

//         }
//     }
// }

void sort(int arr[],int n){
    int l=0;
    int m=0;
    int h=n-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m++],arr[l++]);
        }

        else if(arr[m]==1){
            m++;
        }

        else{
            swap(arr[m],arr[h--]);
        }
    }
}

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){

    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,n);
    printArr(arr,n);
 
    return 0;
}