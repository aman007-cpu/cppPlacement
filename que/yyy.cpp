#include<bits/stdc++.h>
using namespace std;
void solve(vector<string> v,int n,int &ctr){
        if(n==0){
            return;
        }
        
        for(int i=0;i<v.size();i++){
            solve(v,n-1,ctr+=1);
        }
       return;  
    }
    int countVowelStrings(int n) {
        vector<string> v = {"a","e","i","o","u"};
        int ctr=0;
        solve(v,n,ctr);
        return ctr;
    }
int main(){
    int n;
    cin>>n;
  int x = countVowelStrings(n);
 cout<<endl<<x<<endl;
}