#include<iostream>
#include<vector>

using namespace std;

int main()
{
   int n;
cin>>n;
vector<int> v(n);
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
  int ans = v[0];

  int ma = ans;
  int mi = ans;
  int x = v.size();
  for(int i=1;i<x;i++){
    if(v[i]<0){
        swap(ma,mi);
    }
   ma  = max(v[i],ma*v[i]);
   mi = min(v[i],mi*v[i]);
   ans = max(ans,ma);

  }
  cout<<ans;

    return 0;

}