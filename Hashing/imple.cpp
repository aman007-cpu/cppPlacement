#include<bits/stdc++.h>

using namespace std;

const int N = 1e7+10;
int hsh[N];

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        hsh[ar[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
}