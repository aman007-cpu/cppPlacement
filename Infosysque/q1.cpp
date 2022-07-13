#include<bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin>>n;
int E;
cin>>E;
 vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
 
for(int i=0;i<n;i++){
    if(v[i]==E){
        cout<<1;
    }
}

int sum=0;
int ans=0;
int ans1=0;
for(int i=0;i<n;i++){
    sum+=v[i];
    if(sum>=E){
        ans = i+1;
        cout<<ans;
        break;
    }
}
sum=0;
for(int i=0;i<n;i++){
    sum+=v[i];
    if(2*sum>=E){
        ans1 = 2*(i+1);
        cout<<ans1;
        break;
    }
}

 
    
}