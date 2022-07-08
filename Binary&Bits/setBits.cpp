#include<bits/stdc++.h>
using namespace  std;

void printbinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
 printbinary(9);
 int a = 9;
 int i=1;
 if((a & (1<<i))!=0){
    cout<<"SET BIT\n";
 }
 else{
    cout<<"NOT SET BIt\n";
 }
  //bit set
 printbinary(a | (1<<1));
 //bit unset
 printbinary(a &(~(1<<3)));
 //toggle bit
 printbinary(a^(1<<2));
}