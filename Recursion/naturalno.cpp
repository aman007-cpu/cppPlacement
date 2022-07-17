#include<bits/stdc++.h>
using namespace std;

int sumn(int n){
    if(n==1){
        return 1;
    }
    int sum = sumn(n-1) + n;
    return sum;
}


int main(){

    int n;
    cin>>n;
    cout<<sumn(n);
}