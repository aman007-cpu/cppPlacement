#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v,int n){
    if(n>=v.size()){
        return true;
    }
    else{
        if(v[n]<v[n-1]){
            return false;
        }
    }
    return isSorted(v,n+1);
}

int main(){

    vector<int>v = {2,3,5,6,7};
    if(isSorted(v,1)==true){
        cout<<"Sorted hai ji";
    }
    else{
        cout<<"Na not possible";
    }
}