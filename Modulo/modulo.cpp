/* Given  a number n print its factorial 
constraints
 i<=N<=100
 print ans in modulo M
 where M=47

 */
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int M =47;
  int fact =1;
  for(int i=2;i<=n;++i){
    fact = (fact*i)%M;
  }
cout<<fact;
    return 0;
}