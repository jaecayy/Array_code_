#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="</apple>";
    int len = str.length();
    int flag=0;
    if(len<4){
        flag=0;
    }

   
    
        if(str[0]=='<'){
            if(str[1]=='/'){
                if(str[len-1]=='>'){
                    for(int i=2;i<len-1;i++){
                        if((int(str[i])>=48 && int(str[i])<=57)||(int(str[i])>=97 && int(str[i])<=122)){
                            flag=1;
                        }
                        else{
                            flag=0;
                            break;
                        }
                    }

                }
                

            }
        
             
        }

        if(flag){
            cout<<"Success"<<endl;
        }
        else{
            cout<<"Error"<<endl;
        }

        
    

    return 0;
}