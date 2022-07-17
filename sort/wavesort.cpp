#include<bits/stdc++.h>
using namespace std;
void wave(int arr[], int n){

    for(int i=1;i<n-1;){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr[i],arr[i+1]);
        }
        i+=2;
    }
}

int main(){
    int ar[] = {1,4,2,7,3,2,8,9,5};
    wave(ar,9);
    for(int i=0;i<9;i++){
        cout<<ar[i]<<" ";
    }
}