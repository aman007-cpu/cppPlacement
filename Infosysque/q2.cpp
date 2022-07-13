#include<bits/stdc++.h>
using namespace std;

int minnofvillain(vector<int> &v, int m,int h, int n){
    int tot = h*m;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
   if(sum==tot){
    return 0;
   }
sum=0;
int ctr=0;
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++){
      sum+=v[i];
      ctr++;
      if(sum==tot){
        return ctr;
      }
   }
   return 0;

}

int main(){

    int n;
    cin>>n;
    int m;
    cin>>m;
    int h;
    cin>>h;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<minnofvillain(v,m,h,n);
}