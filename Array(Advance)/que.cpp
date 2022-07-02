
#include <iostream>
#include<vector>
#include <cmath>
#include<algorithm>
using namespace std;

int main()
{
  vector<int> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {  int x;
     cin>>x;
     v.push_back(x);
      
  }
  int cost = 0;
  for(int i=0;i<n;i++){
      int e=0,o=0;
      for(int j=i;j<n;j++){
          if(j%2==0){
              e+=v[j];
          }
          else{
              o+=v[j];
          }
          
      }
      int s = e-o;
        int p = pow(s,2);
          
          cost = max(cost,p);
      
      
  }
  
  cout<<cost;
}
