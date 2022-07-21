#include<bits/stdc++.h>
using namespace std;

  void printal(string arr[],int n){
    if(n==0)
    {return;}
    int x = n%10;
   
     n = n/10;
    printal(arr,n);
    cout<<arr[x]<<" ";
  } 


int main()
{
    int n;
    cin>>n;
    string arr[] = {"zero","one","two","three","four","five","six","seven","eigth","nine","ten"};
 

    printal(arr,n);
}