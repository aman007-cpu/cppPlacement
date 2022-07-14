#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
//   vector<int> a;
//   vector<int> b;
//   for(int i=0;i<n/2;i++){
//     a.push_back(v[i]);
//   }
//   for(int i=n/2;i<n;i++){
//     b.push_back(v[i]);
//   }
//   sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//    long long Max=0;
//   for(int i=0;i<n/2;i++){
//    Max += abs(a[i]-b[i]);
//   }
//   a.clear(); b.clear();
//   //minimum
//   sort(v.begin(),v.end());
//  for(int i=0;i<n/2;i++){
//     a.push_back(v[i]);
//   }
//   for(int i=n/2;i<n;i++){
//     b.push_back(v[i]);
//   }
//   sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//    long long Min=0;
//   for(int i=0;i<n/2;i++){
//    Min += abs(a[i]-b[i]);
//   }

//  cout<<Max<<" "<<Min;
//ELSE WHAT I CAN DO IS THAT I WILL  taKE

sort(v.begin(),v.end());
 long long mx=0,mn=0;
 for(int i=0;i<n/2;i++){
    mx+= (v[i+n/2] - v[i]);
    mn += (v[2*i+1] - v[2*1]);
 }
 cout<<mx<<" "<<mn;
}