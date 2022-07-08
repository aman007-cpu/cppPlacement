#include<bits/stdc++.h>
using namespace  std;

int main(){
   int ctr=0;
   int a =13;
    for(int i=31;i>=0;--i){
        if((a&(1<<i))!=0){
            ctr++;
        }
    }
cout<<ctr;
    // Built in func to count bits
//cout<<_builtin_popcount(a);
    
}