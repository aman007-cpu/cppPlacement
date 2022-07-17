#include<bits/stdc++.h>
using namespace std;
int exponent(int n,int m){
    if(m==0){
        return 1;
    }
    return (n*exponent(n,m-1));
}

int main(){

    int n,m;
    cin>>n>>m;
   cout<<exponent(n,m);
}