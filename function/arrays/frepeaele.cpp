#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
for(int i=0;i<n;i++){
    cin>>ar[n];
}
 const int N = 1e6+2;
 int idx[N];
 for(int i=0;i<N;i++){
     idx[i]=-1;
 }

 int minindx = INT_MAX;
 for(int i=0;i<n;i++){
     if(idx[ar[i]]!=-1){
         minindx = min(minindx,idx[ar[i]]);
     }
     else{
         idx[ar[i]] = i;
     }
 }

  if(minindx == INT_MAX){
      cout<<"-1";
  }else{
      cout<<minindx+1<<endl;
  }

return 0;
}