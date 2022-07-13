#include<bits/stdc++.h>

using namespace std;
int minchange(vector<int> &v, int n){
    int ctr=0;
    for(int i=0;i<n;i++){
        if(i!=n/2){
        if(v[i+1]-v[i]!=1){
            for(int j=i+1;j<n;j++){
                if(v[i]>v[j]){
                    v[i] = v[j]-1;
                    ctr++;
                    break;
                }
                if(v[i]<v[j]){
                   v[j] = v[i] + 1;
                    break;
                }
            }
        }
        }
        else{
            if(v[i-1]<v[i]){
             v[i] = v[i-1] - 1;
                ctr++;
            }
            else if(v[i-1]>v[i] && v[i-1]-v[i]!=1){
                v[i] = v[i-1] -1;
                ctr++;
            }
        }
        }
       return ctr;
    }
     


int main(){
int n;
cin>>n;
vector<int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

cout<<minchange(v,n);

}