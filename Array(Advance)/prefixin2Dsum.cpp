#include<bits/stdc++.h>

using namespace std;
int N = 1e3 + 10;
int ar[N][N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>ar[i][j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sum =0;
        for(int i=a;i<=c;++i){
            for(int j=b;j<=d;++j){
                sum+=ar[i][j];
            }
        }
        cout<<sum<<endl;
    }
}