
//O(NlogN)+O(N)

#include<bits/stdc++.h>
using namespace std;
void pairedElements(int arr[],int sum,int n){
    int left = 0;
    int right = n-1;
    while(left<right){
        if(arr[left]+arr[right]==sum){
            cout<<arr[left]<<" "<<arr[right]<<endl;
        }
        if(arr[left]+arr[right]<sum){
            left++;
        }
        else{
            right--;
        }
    }
}
int  main()
{
  int arr[] = {2, 3, 4, -2,
               6, 8, 9, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n);
  int sum = 6;
  pairedElements(arr,sum, n);
}


//   O(N) solution using unordered maps

/////////////////////////////////////////////////////////////////////////////////

// #include <bits/stdc++.h>
// #include <unordered_map>
// using namespace std;

// int getPairsCount(int arr[], int n, int sum)
// {
//     unordered_map<int, int> m;
 
//     for (int i = 0; i < n; i++)
//         m[arr[i]]++;
 
//     int twice_count = 0;
 
//     for (int i = 0; i < n; i++) {
//         twice_count += m[sum - arr[i]];
//         if (sum - arr[i] == arr[i])
//             twice_count--;
//     }
 
//     return twice_count / 2;
// }

// int main()
// {
//     int arr[] = { 1, 5, 7, -1, 5 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 6;
//     cout << "Count of pairs is "<< getPairsCount(arr, n, sum);
//     return 0;
// }