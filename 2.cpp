

//Find the maximum and minimum element in an array; 

/*
i used best complexity code in which only in single traverrsal the array return both min and max element in O(n)   {not in O(n)+O(n)  one pass for min and one pass for max }
Returns a pair using class ;
*/

#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
    int min;
    int max;
};

Pair mm(int arr[],int n){
    Pair minmax;
    if(n==1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }

    else{
        if(arr[0]>arr[1]){
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else{
            minmax.min = arr[0];
            minmax.max = arr[1];
        }

        for(int i=2;i<n;i++){
            if(arr[i]>minmax.max)
            {
                minmax.max = arr[i];
            }
            else if(arr[i]<minmax.min){
                minmax.min = arr[i];
            }
        }
        return minmax;
    }

}

int main(){
    int arr[] = { 1000, 11, 445,1, 330, 3000 };
    int n = sizeof(arr)/sizeof(arr[0]);
    Pair ans = mm(arr,n);
    cout<<"minimum is "<<ans.min<<endl;
    cout<<"maximum is "<<ans.max<<endl;
    return 0;
}
