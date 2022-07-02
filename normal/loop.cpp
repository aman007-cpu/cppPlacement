#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
   int maxm = 0;
   for(int i=0;i<n;i++){
       maxm  = max(maxm,ar[i]);
         cout<<maxm<<endl;
   }
 
   return 0;
}