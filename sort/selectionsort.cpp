#include<bits/stdc++.h>
using namespace std;
void selection(int ar[],int n){
    for(int i=0;i<n-1;i++){
        int k=i;
     
        for(int j=i+1;j<n;j++){
          if(ar[k]>ar[j]){
            
              k =j;
          }
        }
        swap(ar[k],ar[i]);
        
    }
}



int main(){
    int ar[] = {20,5,40,10,30,50};

     selection(ar,6);
   for(int i=0;i<6;i++){
    cout<<ar[i]<<" ";
   }
}
