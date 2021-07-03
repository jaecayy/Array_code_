#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1;
    string s1="C";
    string s2="B";
    string s3="C";
    int c1=1;
    int c2=2;
    int c3=3;
   
    int maxn = 3;
    int arr[3]={0};
    int x=0;
    for(int i=1;i<=n;i++){
        if(s1==s2){
            int ans = c1+c2;
            arr[x] = ans;
            x++;
        }
        else if(s2==s3){
            int ans = c2+c3;
            arr[x] = ans;
            x++;
        }
        else if(s1==s3){
            int ans = c1+c3;
            arr[x] = ans;
            x++;
        }
        else if((s1==s2) && (s2==s3)){
            int ans = c1+c2+c3;
            arr[x] = ans;
            x++;
        }
        else{
            arr[x++] = c1;
            arr[x++] = c2;
            arr[x++] = c3;
        }
    }

    sort(arr,arr+maxn);
    for(int i=0;i<maxn;i++){
        if(arr[i]==0){
            break;
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}