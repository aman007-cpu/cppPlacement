#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    if(n==1){return true;}

    bool restarr  = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restarr);
}

int main(){
   int ar[]= {1,3,2,4,8};
   cout<<sorted(ar,5);
    return 0;

}