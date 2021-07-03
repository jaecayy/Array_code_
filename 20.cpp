#include<bits/stdc++.h>
using namespace std;

void solve(float m,float tax,float tip){
    float ans1= ((tax/100)*m) ;
    float ans2 =(tip/100)*m;
    float ans3 = m+ans1+ans2;
    cout<<round(ans3)<<endl;
}

int main(){
    float meal=10.25;
    float tax = 17;
    float tip= 5;
    solve(meal,tax,tip);
    return 0;

}