
#include<bits/stdc++.h>
using namespace std;
 
 long long mergeo(int ar[],int l,int mid,int r){
    long long inv = 0;
    int n1 = mid -l +1;
    int n2 = r-mid;
    int a[n1];
    int a[n2];
    for(int i=0;i<n1;i++){
        a[i] = ar[l+1];
    }
    for(int i=0;i<n2;i++){
        b[i] = ar[mid+i+1];
    }
    int i=0, j=0,k=l;
    while(i<n1 and j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        else{
            arr[k] = b[j];
            inv += n1 - i;
            k++;j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++; j++;
    }


  return inv;
 }
long long mergesort(int arr[], int l, int r){
    long long inv =0;
    if(l<r){
        int mid = (l+r)/2;
        inv += mergesort(arr,l,mid);
         inv +=  mergesort(arr,mid+1,r);
        inv += mergeo(arr,l,mid,r);
    }
}






int main(){
    int ar[] = {1,0,2,1,2,0,0,1,1};
     cout<<mergesort(ar,0,8);
}