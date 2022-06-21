#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++){
      cin>>ar[i];
  }

  for(int i=0;i<n;i++){
      int sum=0;
      for(int j=i;j<n;j++){
          sum+=ar[j];
           cout<<sum<<endl;
      }

  }
  return 0;

}