//Merge two sorted arrays within O(1)space complexity;

#include<bits/stdc++.h>
using namespace std;

void mergeArray(int a[],int b[],int m,int n){
    for(int i=0;i<m;i++){
        if(a[i]>b[0]){
            swap(a[i],b[0]);
            sort(b,b+n);
        }
    }
    
}

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int a[] = { 3, 5, 6, 8, 12 };
    int b[] = { 1, 4, 9, 13 };
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int); 
    mergeArray(a, b, m, n);
    printArr(a,m);
    printArr(b,n);
    return 0;
}