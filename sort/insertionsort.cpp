#include<bits/stdc++.h>
using namespace std;


// void insert(int ar[],int n){
//     for(int i=1;i<n;i++){
//         int key = ar[i];
//         int j=i-1;
//         while(j>=0 && ar[j]>key){
//             ar[j+1] = ar[j];
//             j--;
//         }
//         ar[j+1] = key;

//     }
// }

///insertion sort using recursion

void insert(int ar[],int n){
    if(n<=1){
        return;
    }
    insert(ar,n-1);

    int key=ar[n-1];
    int j=n-2;
    while(j>=0 && ar[j]>key){
      ar[j+1] = ar[j];
      j--;
    }
    ar[j+1] = key;

}

int main(){
    int ar[] = {20,5,40,10,30,50};

     insert(ar,6);
   for(int i=0;i<6;i++){
    cout<<ar[i]<<" ";
   }
}