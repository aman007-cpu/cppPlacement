#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
  vector<int> v;
 for(int i=0;i<n;i++){
    cin>>v[i];
 }

int maxtill= INT_MIN;
int curr=0;
for(int i=0;i<n;i++){
    curr+=v[i];
    maxtill = max(maxtill,curr);

    if(curr<0){
        curr=0;
    }
   }
cout<<maxtill;
    return 0;
}