#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    
    if(b==0) return a;

    return gcd(b,a%b);
}
int main(){
  cout<<gcd(12,18);
  int a=12,b=18;
  cout<<endl;
  cout<<(a*b)/gcd(a,b)<<endl;

  //inbuilt func of gcd

  cout<<__gcd(12,18);
}