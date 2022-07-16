#include<bits/stdc++.h>
using namespace std;

void oneton(int n){
    if(n==0){
        
        return;
    }
    
    oneton(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    oneton(n);
}