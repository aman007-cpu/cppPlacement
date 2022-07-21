#include<bits/stdc++.h>
using namespace std;
bool isBinary(int *arr,int k,int s,int e){
    if(s>e) return false;
     int mid = (s+e)/2;

     
     if(arr[mid]==k){
        return true;
     }
        if(arr[mid]>k){
         return isBinary(arr,k,s,mid-1);
         
        }
        else{
          return isBinary(arr,k,mid-1,e); 
           
        }
     }
  


int main(){

    int arr[] = {2,4,6,8,9,10};
    int k;
    cin>>k;
    bool ans = isBinary(arr,k,0,5);
     if(ans){
        cout<<"hogaya ji";
     }
     else{
        cout<<"na hopaya ohoh";
     }
}