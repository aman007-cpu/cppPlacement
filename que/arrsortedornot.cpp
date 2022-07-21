#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *ar,int n){
    if(n==0 || n==1){
       
        return true; 
    }
    if(ar[0]>ar[1]){
      return false;
    }
    else{
      bool ak = isSorted(ar+1,n-1);
    return ak; 
    }
}
int main(){

    int ar[6] = {2,4,6,9,11,13};
    cout<<isSorted(ar,6);
}