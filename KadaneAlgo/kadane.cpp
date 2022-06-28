#include<iostream>
#include<vector>


using namespace std;

//Using DP

int main(){
int n;
cin>>n;
vector<int> v(n);
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }

  int curr=0, maxtill = 0;
  for(int i=0;i<v.size();i++){
    curr += v[i];
    maxtill = max(maxtill,curr);
    if(curr<0){
        curr=0;
    }

  }
  cout<<maxtill<<endl;
    return 0;
}