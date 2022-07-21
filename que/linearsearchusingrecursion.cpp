#include<bits/stdc++.h>
using namespace std;

bool isFound(int *arr,int k,int n){
    if(n==0) return false;
  
     if(arr[0]==k){
        return true;
     }
     else{
        bool ak = isFound(arr+1,k,n-1);
        return ak;
     }

}

int main(){

    int arr[] = {2,4,6,1,8,5};
    int k;
    cin>>k;
   bool ans =  isFound(arr,k,6);
   if(ans){
    cout<<"got it";
   }else{cout<<"nah";}

}