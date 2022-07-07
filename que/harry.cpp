#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   vector<int> v;
   int j=0;
   for(int i=n/2;i<n;i++){
    if((arr[i]/3)==arr[j]){
        v.push_back(arr[j]);
    }
    else{
        cout<<-1<<endl;
        break;
    }
    j++;
   }
 sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}