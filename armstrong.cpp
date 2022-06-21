#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int sum=0;
  int temp = n;
  cout<<endl;
  while(n>0){
      int last = n%10;
    sum = sum + (last*last*last);
    n=n/10;
  }
  if(sum==temp){
    cout<<"ARMSTRONG NuMBER";
  }
  else{
      cout<<"NOT";
  }
  return 0;

}