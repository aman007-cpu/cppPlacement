#include<bits/stdc++.h>


using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m;
    cin>>m;
    sort(a,a+n);
    int minv = INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int d = a[i+m-1]- a[i];

        minv  = min(minv,d);

    }
    cout<<minv;
  }


    return 0;
}