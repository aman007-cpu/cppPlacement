#include<bits/stdc++.h>
using namespace std;

void spelling(int n,string s[]){
    if(n==0){
        return;
    }
     spelling(n/10,s);
     cout<<s[n%10]<<" ";
   
}

int main(){

    int n;
    cin>>n;
    string str[]= {"Zero","one","Two","Three","four","Five","Six","Seven","Eight","Nine","Ten"};
    spelling(n,str);
}