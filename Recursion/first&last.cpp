#include<iostream>
using namespace std;

int firsto(int ar[],int n,int i,int key){
    if(i==n){
        return -1;
    }
   if(ar[i]==key){
    return i;
   }
   return firsto(ar,n,i+1,key);
}
int lasto(int ar[],int n,int i,int key)
{
       int res =  lasto(ar,n,i+1,key);
     if(res!=-1){
        return res;
    }
 
   if(ar[i]==key){
    return i;
   }
   return -1;
}
int main(){
  int ar[] = {1,2,5,6,2,7};
  cout<<lasto(ar,6,0,2)<<endl;
    return 0;
}