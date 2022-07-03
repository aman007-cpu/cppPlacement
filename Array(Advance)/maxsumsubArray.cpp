#include<iostream>
#include<climits>
using namespace std;


int main(){
 int n;
 cin>>n;
 int * arr = new int[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
int maxsum = INT_MIN;
 for(int sp=0;sp<n;sp++){
    for(int ep = sp;ep<n;ep++){
        int sum=0;
       for(int i=sp;i<=ep;i++){
       sum+=arr[i];
       }
       //cout<<endl;
       maxsum = max(maxsum,sum);
    }
 }
 cout<<maxsum;
 return 0;

}