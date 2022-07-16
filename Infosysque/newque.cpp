#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
 
  int maxm = INT_MIN;
    for(int i=0;i<n;i++){
        int ctr=0;
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j]){
                ctr++;
            }
            else{break;}

        }
        maxm = max(maxm,ctr);
    }

cout<<maxm+1;

}