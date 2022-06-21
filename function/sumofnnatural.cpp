#include<iostream>
using namespace std;
void natural(int n){
  int sum1 = n*n + n;
  int sum = sum1/2;
  cout<<sum;
}

int main(){
  int n;
  cin>>n;
  natural(n);

  return 0;


}