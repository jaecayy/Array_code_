//Find the duplicate in an array of N+1 integers;


/*ALGO
1.Traverse the array from start to end.

2.For every element,take its absolute value and if the abs(array[i])‘th element is positive, the element has not encountered before, else if negative the element has been encountered before print the absolute value of the current element.

*/

#include<bits/stdc++.h>
using namespace std;
void printRepeating(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])] > 0){
            arr[abs(arr[i])] = -arr[abs(arr[i])];

        }
        else{
            cout<< abs(arr[i])<<" ";
        }
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 1, 3, 6, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr,n);
    return 0;
}