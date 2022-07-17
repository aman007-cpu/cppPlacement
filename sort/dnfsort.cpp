#include<bits/stdc++.h>
using namespace std;

void dnf(int arr[],int n){
    int low =0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[high],arr[mid]);
                high--;
            
        }
    }
}


int main(){
    int ar[] = {1,0,2,1,2,0,0,1,1};
    dnf(ar,9);
    for(int i=0;i<9;i++){
        cout<<ar[i]<<" ";
    }
}