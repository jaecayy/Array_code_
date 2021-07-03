
//codechef long challenge

#include <iostream>
using namespace std;
int main()
{
   int t=1;
   while(t--){
    int D,d,P,Q;
    D=5;
    d=2;
    P=1;
    Q=2;
    int x=0;
    int y=0;
    int count=0;
    while(D){
        
      if(x==d){
          y++;
          count=count+P+Q*y;
          x=1;
          D--;
      } 
      else{
          count=count+ P+Q*y;
          x++;
          D--;
      }
        
    }
    cout<<count<<endl;
   }
    return 0;
}
