//Reverse the whole array in 0(n)


#include<bits/stdc++.h>
using namespace std;
void reverseArr(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,n);
    printArr(arr,n);
    return 0;
}